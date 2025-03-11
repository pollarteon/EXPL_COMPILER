%{
 #include <stdlib.h>
 #include <stdio.h>
 #include <string.h>
 #include "expl.h"
 #include "expl.c"
 #include "code_gen.h"
 #include "code_gen.c"
 int yylex(void);
 extern FILE* yyin;
 void yyerror(const char* s);
%}

%union{
  struct tnode *no;
  struct ParamList* plist;
  struct FuncArgs* arglist;
  struct Fieldlist* fieldlist;
  int integer;
  char* string;
}
%token  PLUS MINUS MUL DIV MOD PBEGIN READ WRITE  IF ELSE THEN ENDIF ENDWHILE WHILE OR AND LT GT LTE GTE EQUALS NOTEQUALS DO BREAK CONTINUE DECL ENDDECL INT STR MAIN RETURN BREAKPOINT TYPE ENDTYPE  ALLOC INITIALIZE FREE
%token <no> NUM STRING END ID PNULL
%type <no> expr program Slist Stmt
%type <no> InputStmt OutputStmt AsgStmt WhileStmt Ifstmt 
%type <no> BreakStmt ContinueStmt DoWhileStmt ReturnStmt BreakpointStmt
%type <no> Identifier index
%type <no>  FdefBlock MainBlock Gdecl GidList Gid
%type <no> Fdef  LdeclBlock Body LdecList Ldecl IdList Lid Field
%type <no>  initializeStmt AllocStmt FreeStmt
%type <string> Type TypeName
%type <plist> ParamList Param
%type <arglist> ArgList
%type <fieldlist> FieldDecl FieldDeclList

%left OR
%left AND
%left EQUALS NOTEQUALS
%left LT LTE GT GTE
%left PLUS MINUS
%left MUL DIV MOD


%%

program :TypeDefBlock GDeclBlock FdefBlock MainBlock{printf("Program Finished\n");exit(1);}
  | TypeDefBlock GDeclBlock  MainBlock{printf("Program Finished\n");exit(1);}
  | TypeDefBlock MainBlock{printf("Program Finished\n");exit(1);}
  ;
//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------
/// TYPE DEFINITIONS SYNTAX
//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------

TypeDefBlock : TYPE TypeDefList ENDTYPE {PrintTypeTable();};
  |
  ;

TypeDefList : TypeDefList TypeDef {};
  | TypeDef {};
  ;

TypeDef : ID '{' FieldDeclList '}' {
  char* type_name = $1->varname;
  Tinstall(type_name,0,$3);
  struct Typetable* declared_type = TLookup(type_name);
  struct Fieldlist* fields = (declared_type)->fields;
  struct Fieldlist* temp = fields;
  int fieldIndex = 0;
  int total_size =0;
  while(temp!=NULL){
    if(fieldIndex>7){
      printf("ERROR: no more than 8 member fields for a user-defined type is allowed %s \n",type_name);
      return -1;
    }
    temp->fieldIndex = fieldIndex++;
    if(temp->type->size==-1){
     if(strcmp(temp->type->name,type_name)==0){
        free(temp->type->name); //freeing the temporoary type and making 
        free(temp->type); //temp->type point to the type table entry
        temp->type = declared_type;
     }
     else{
      printf("ERROR: type not defined earlier %s",temp->name);
      return -1;
     }
    }
    total_size += GetSize(temp->type);
    temp=temp->next;
  }
  declared_type->size = total_size;
  PrintFieldlist(fields);

}

FieldDeclList : FieldDeclList FieldDecl {$$ =Finstall($1,$2);}
  | FieldDecl {$$=$1;}
  ;

FieldDecl : TypeName ID ';' {
  struct Typetable* type = TLookup($1);
  if(type==NULL){
    type = (struct Typetable*)malloc(sizeof(struct Typetable));
    type->name = strdup($1);
    type->size = -1; //to  indicate that the type was not present in the type table
    type->fields=NULL;
    type->next=NULL;
  }
  $$ = Fcreate($2->varname,0,type);
}

TypeName : INT {$$="int";}
  | STR {$$="str";}
  | ID {$$=$1->varname;};
  ;

//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------
/// GLOBAL DECLARATIONS SYNTAX
//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------

GDeclBlock : DECL GdeclList ENDDECL {print_GSymbolTable();L_cleanup();local_binding=1;param_binding=1;}
| DECL ENDDECL {} ;

GdeclList : GdeclList Gdecl {} | Gdecl {};

Gdecl : Type GidList ';' {
  char* declaration_type = $1;
  struct Typetable* declaration_type_entry = TLookup(declaration_type);
  struct tnode* varList = $2; //varList contains List of variables
  while(varList!=NULL){
    struct Gsymbol* Gentry = GLookUp(varList->varname);
    if( (Gentry->type!=NULL) && strcmp(Gentry->type->name,"pointer")==0){ //if variable inserted as a pointer type
      if(strcmp(declaration_type,"int")==0){
        Gentry->type = TLookup("pointer(int)");
      }
      else if(strcmp(declaration_type,"str")==0){
        Gentry->type =TLookup("pointer(str)");
      }
      else{
        printf("ERROR: pointers are not reserved for user-defined type: %s\n",declaration_type);
        return -1;
      }
    }
    else if(Gentry->type==NULL){
      Gentry->type = declaration_type_entry;
    }
    else{
      printf("ERROR: REDECLARATION OF VARIABLE %s\n",Gentry->name);
      exit(1);
    }
    varList=varList->right;
  }
};

GidList : GidList ',' Gid {
  struct tnode* IDNode = $3;
  struct tnode* temp = $1;
  while (temp->right != NULL) {  
      temp = temp->right;
  }
  temp->right = IDNode;  
  $$ = $1; 
} | Gid;

Gid : ID{
  G_Install($1->varname,NULL,1,-1,NULL,-1);
   $$=createNode(-1,1,-1,NULL,NULL,$1->varname,-1,NULL,NULL);
}
| ID '[' NUM ']'{
  G_Install($1->varname,NULL,$3->val,-1,NULL,-1);
  $$=createNode(-1,$3->val,1,NULL,NULL,$1->varname,-1,NULL,NULL);
}
| ID '[' NUM ']' '[' NUM ']'{
  G_Install($1->varname,NULL,$3->val,$6->val,NULL,-1);
   $$ = createNode(-1,$3->val,$6->val,NULL,NULL,$1->varname,-1,NULL,NULL);
}
| MUL ID { //this is for Pointer
  G_Install($2->varname,TLookup("pointer"),1,-1,NULL,-1);
  $$ = createNode(-1,1,-1,TLookup("pointer"),NULL,$2->varname,-1,NULL,NULL);
}
| ID '(' ParamList ')' {
  G_Install($1->varname,NULL,1,-1,$3,flabel++);
  $$ = createNode(-1,1,-1,NULL,NULL,$1->varname,-1,NULL,NULL);
}
| ID '(' ')'{
  G_Install($1->varname,NULL,1,-1,NULL,flabel++);
  $$ = createNode(-1,1,-1,NULL,NULL,$1->varname,-1,NULL,NULL);
}
;
//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------
// FUNCTION DEFINITION SYNTAX
//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------

FdefBlock : FdefBlock Fdef | Fdef;

Fdef : Type ID '(' ParamList ')' '{' LdeclBlock Body '}' {
  char* definition_type = $1;
  struct ParamList* defintion_param_list = $4;
  struct Gsymbol* Gentry = $2->Gentry;
  if(Gentry==NULL){
    printf("ERROR: FUNCTION NOT DECLARED %s\n",$2->varname);
    return -1;
  }
  //checking return type equivalence
  if(strcmp(definition_type,Gentry->type->name)!=0){
    printf("ERROR: FUNCTION RETURN TYPE NOT MATCHING WITH DECLARATION\n");
    return -1;
  }

  //checking param equivalence
  struct ParamList* temp1 = defintion_param_list;
  struct ParamList* temp2 = Gentry->param_list;
  while(temp1!=NULL && temp2!=NULL){
    if(strcmp(temp1->name,temp2->name)!=0 || strcmp(temp1->type->name,temp2->type->name)!=0){
      printf("ERROR: FUNCTION MISMATCH %s\n",Gentry->name);
      return -1;
    }
    temp1=temp1->next;
    temp2=temp2->next;
  }
  if(temp1!=NULL || temp2!=NULL){
    printf("ERROR: FUNCTION DECLARATION MISMATCHED: %s\n",Gentry->name);
    return -1;
  }
  //Generating Header and Cleaning Up Local Symbol Table
  FILE* target_file = fopen("code.xsm","a");
  if(!begin_flag){ //if we are generating the first function the header generated
      fclose(target_file);
      target_file = fopen("code.xsm","w");
      header_code_gen(target_file);
      begin_flag=1;
    }
    print_Ltable();
    printf("Preorder of Syntax Tree : ");
    preorder($8);
    printf("\n\n");
    returnStmt_checker($8,TLookup(definition_type)); //return statement checker..............
    fprintf(target_file,"F%d:\n",Gentry->flabel);
    function_begin_code_gen(target_file,Ltable);
    code_gen($8,target_file);
    L_cleanup();
    local_binding=1;
    param_binding=1;
    fclose(target_file);
}
| Type ID '(' ')' '{' LdeclBlock Body '}'{
  char* definition_type = $1;
  struct Gsymbol* Gentry = GLookUp($2->varname);
  if(Gentry==NULL){
    printf("ERROR: FUNCTION NOT DECLARED %s\n",$2->varname);
    return -1;
  }
  //checking return type equivalence
  if(strcmp(definition_type,Gentry->type->name)!=0){
    printf("ERROR: FUNCTION RETURN TYPE NOT MATCHING WITH DECLARATION\n");
    return -1;
  }

  //checking param equivalence
  if(Gentry->param_list==NULL){
    FILE* target_file = fopen("code.xsm","a");
    if(!begin_flag){ //if we are generating the first function the header generated
        fclose(target_file);
        target_file = fopen("code.xsm","w");
        header_code_gen(target_file);
        begin_flag=1;
      }
      print_Ltable();
      printf("Preorder of Syntax Tree : ");
      preorder($7);
      printf("\n\n");
      returnStmt_checker($7,TLookup(definition_type)); //return statement checker..............
      fprintf(target_file,"F%d:\n",Gentry->flabel);
      function_begin_code_gen(target_file,Ltable);
      code_gen($7,target_file);
      L_cleanup();
      local_binding=1;
      param_binding=1;
      fclose(target_file);
  }else{
    printf("ERROR: FUNCTION DECLARATION UNMATCHED\n");
    return -1;
  }



};

ParamList : ParamList ',' Param {
  $$ = append_param_list($1,$3);
}
| Param  {
  $$ = $1;
};

Param : Type ID {
  Typetable* param_type = TLookup($1);
  L_Install($2->varname,param_type,1);
  $$ = create_param_list(param_type,$2->varname);
}
| Type MUL ID{
  char* declaration_type = $1;
  Typetable* Lentry_type;
  if(strcmp(declaration_type,"int")==0){
    Lentry_type = TLookup("pointer(int)");
  }
  else if(strcmp(declaration_type,"str")){
    Lentry_type = TLookup("pointer(str)");
  }
  else{
    printf("ERROR: pointers not reserved for user-defined type : %s\n",declaration_type);
    return -1;
  }
  L_Install($3->varname,Lentry_type,1);
  $$ = create_param_list(Lentry_type,$3->varname);
}

//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------
//MAIN BLOCK SYNTAX
//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------

MainBlock : INT MAIN '(' ')' '{' LdeclBlock Body '}' {
  FILE* target_file = fopen("code.xsm","a");
  if(!begin_flag){
      fclose(target_file);
      target_file = fopen("code.xsm","w");
      header_code_gen(target_file);
      begin_flag=1;
    }
    print_Ltable();
    printf("Preorder of Syntax Tree : ");
    preorder($7);
    printf("\n\n");
    returnStmt_checker($7,TLookup("int"));
    fprintf(target_file,"MAIN:\n");
    function_begin_code_gen(target_file,Ltable);
    int result_reg =code_gen($7,target_file);
    L_cleanup();
    local_binding=1;
    fclose(target_file);
}


//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------
//LOCAL DECLARATION BLOCK
//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------

LdeclBlock : DECL LdecList ENDDECL {local_binding=1;} 
| DECL ENDDECL {local_binding=1;}
| /* empty */{};

LdecList : LdecList  Ldecl {} | Ldecl {};

Ldecl : Type IdList ';' {
  char* declaration_type = $1;
  struct Typetable* declaration_type_entry = TLookup(declaration_type);
  struct tnode* varList = $2; //varList contains List of variables

  while(varList!=NULL){
    struct Lsymbol* Lentry = LLookUp(varList->varname);
    if(Lentry==NULL){
      if(varList->type!=NULL && strcmp(varList->type->name,"pointer")==0){
        if(strcmp(declaration_type,"int")==0){
          L_Install(varList->varname,TLookup("pointer(int)"),0);
        }
        else if(strcmp(declaration_type,"str")==0){
          L_Install(varList->varname,TLookup("pointer(str)"),0);
        }
        else{
          printf("ERROR: pointers not reserved for user-defined variables: %s\n",declaration_type);
          return -1;
        }
      }
      else
      L_Install(varList->varname,declaration_type_entry,0);
    }
    else{
      printf("ERROR: REDECLARATION OF LOCAL VARIABLE IN %s\n",Lentry->name);
      exit(1);
    }
    varList=varList->right;
  }
  
};

IdList : IdList ',' Lid {
  struct tnode* IDNode = $3;
  struct tnode* temp = $1;
  while (temp->right != NULL) {  
      temp = temp->right;
  }
  temp->right = IDNode;  
  $$ = $1; 
} | Lid ;

Lid : ID{
   $$=createNode(-1,1,-1,NULL,NULL,$1->varname,-1,NULL,NULL);
}
| MUL ID { //this is for Pointer
  $$ = createNode(-1,1,-1,TLookup("pointer"),NULL,$2->varname,-1,NULL,NULL);
};
//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------
//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------

Body :PBEGIN Slist ReturnStmt END {$$ = createNode(-1,1,1,NULL,NULL,NULL,CONNECTOR_NODE,$2,$3);};
| PBEGIN ReturnStmt END {$$=$2;}

Type : INT {$$ = "int";} 
| STR {$$ = "str";}
| ID {
    char* type_name = $1->varname;
    if(TLookup($1->varname)==NULL){
      printf("ERROR : The Following type is not user-defined %s\n",type_name);
      return -1;
    }
    $$=$1->varname;
  }

Slist : Slist Stmt {
  $$=createNode(-1,1,1,NULL,NULL,NULL,CONNECTOR_NODE,$1,$2);
}
| Stmt {$$=$1;}
;

Stmt : InputStmt {$$=$1;} 
| OutputStmt {$$=$1;}
|AsgStmt {$$=$1;}
|Ifstmt {$$=$1;}
|WhileStmt {$$=$1;}
|DoWhileStmt {$$=$1;}
|BreakStmt {$$=$1;}
|ContinueStmt {$$=$1;}
|ReturnStmt {$$=$1;}
|BreakpointStmt {$$=$1;}
|initializeStmt {$$=$1;}
|AllocStmt {$$=$1;}
|FreeStmt {$$=$1;}



;

InputStmt : READ '(' Identifier ')' ';' {
    // printf("Reading");
    $$ = makeNonLeafNode($3,NULL,READ_NODE,"_");
  };

OutputStmt : WRITE '(' expr ')' ';' {$$ = makeNonLeafNode($3,NULL,WRITE_NODE,"_");};

AsgStmt : Identifier '=' expr ';' {
  // printf("%s\n",$1->Gentry->name);
  $$ = makeNonLeafNode($1,$3,OPERATOR_NODE,"=");
  };

BreakStmt : BREAK ';' {$$=makeNonLeafNode(NULL,NULL,BREAK_NODE,"_");}

BreakpointStmt : BREAKPOINT ';' {$$=makeNonLeafNode(NULL,NULL,BREAKPOINT_NODE,"_");}

ContinueStmt : CONTINUE ';' {$$=makeNonLeafNode(NULL,NULL,CONTINUE_NODE,"_");}

Ifstmt : IF '(' expr ')' THEN Slist ELSE Slist ENDIF ';' {
  struct tnode* if_else_node = makeNonLeafNode($3,$6,IF_ELSE_NODE,"_");
  if_else_node->middle = $8;
  $$ = if_else_node;
}
| IF '(' expr ')' THEN Slist ENDIF ';' {$$ = makeNonLeafNode($3,$6,IF_NODE,"_");}
;

WhileStmt : WHILE '(' expr ')' DO Slist ENDWHILE ';' {$$ = makeNonLeafNode($3,$6,WHILE_NODE,"_");}

DoWhileStmt : DO Slist WHILE '(' expr ')' ';' {$$ = makeNonLeafNode($5,$2,DO_WHILE_NODE,"_");}

ReturnStmt : RETURN expr ';' {$$ = makeNonLeafNode($2,NULL,RETURN_NODE,"_");}

initializeStmt : Identifier '=' INITIALIZE '(' ')' ';' {$$ = makeNonLeafNode($1,NULL,INITIALIZE_NODE,"_");}

AllocStmt : Identifier '=' ALLOC '(' ')' ';' {$$=makeNonLeafNode($1,NULL,ALLOC_NODE,"_");}

FreeStmt : FREE '(' Identifier ')' ';' {$$=makeNonLeafNode($3,NULL,FREE_NODE,"_");}
;

expr : expr PLUS expr  {$$ = makeNonLeafNode($1,$3,OPERATOR_NODE,"+");}
  | expr MINUS expr   {$$ = makeNonLeafNode($1,$3,OPERATOR_NODE,"-");}
  | expr MUL expr {$$ = makeNonLeafNode($1,$3,OPERATOR_NODE,"*");}
  | expr DIV expr {$$ = makeNonLeafNode($1,$3,OPERATOR_NODE,"/");}
  | expr MOD expr {$$=makeNonLeafNode($1,$3,OPERATOR_NODE,"%");}
  | expr LT expr {$$ = makeNonLeafNode($1,$3,OPERATOR_NODE,"<");}
  | expr LTE expr {$$ = makeNonLeafNode($1,$3,OPERATOR_NODE,"<=");}
  | expr GT expr {$$ = makeNonLeafNode($1,$3,OPERATOR_NODE,">");}
  | expr GTE expr {$$ = makeNonLeafNode($1,$3,OPERATOR_NODE,">=");}
  | expr EQUALS expr {$$ = makeNonLeafNode($1,$3,OPERATOR_NODE,"==");}
  | expr NOTEQUALS expr {$$ = makeNonLeafNode($1,$3,OPERATOR_NODE,"!=");}
  | expr AND expr {$$=makeNonLeafNode($1,$3,OPERATOR_NODE,"&&");}
  | expr OR expr {$$=makeNonLeafNode($1,$3,OPERATOR_NODE,"||");}
  | ID '(' ')' {
    struct tnode* function_node = makeNonLeafNode($1,NULL,FUNCTION_NODE,"_");
    function_node->varname = strdup($1->varname);
    struct Gsymbol* Gentry = $1->Gentry;
    if(Gentry==NULL){
      printf("ERROR: NO SUCH FUNCTION HAS BENN DECLARED!!: %s\n",$1->varname);
      exit(1);
    }
    struct ParamList* param_list = Gentry->param_list;
    struct FuncArgs* arg_list = NULL;
    if(!verify_func_signature(arg_list,param_list)){
      printf("ERROR:FUNCTION SIGNATURE MISMATCH: %s\n",$1->varname);
      exit(1);
    }
    function_node->Gentry = Gentry;
    function_node->type = Gentry->type;
    $$ = function_node;
  }
  | ID '(' ArgList ')'{
    struct tnode* function_node = makeNonLeafNode($1,NULL,FUNCTION_NODE,"_");
    function_node->argList = $3;
    function_node->varname = strdup($1->varname);
    struct Gsymbol* Gentry = $1->Gentry;
    if(Gentry==NULL){
      printf("ERROR: NO SUCH FUNCTION HAS BEEN DECLARED!!: %s\n",$1->varname);
      exit(1);
    }
    struct ParamList* param_list = Gentry->param_list;
    struct FuncArgs* arg_list = $3;
    if(verify_func_signature(arg_list,param_list)==0){
      printf("ERROR:FUNCTION SIGNATURE MISMATCH: %s\n",$1->varname);
      exit(1);
    }
    function_node->Gentry = Gentry;
    function_node->type = Gentry->type;
    $$=function_node;
  }
  | '(' expr ')'  {$$ = $2;}
  | NUM   {$$ = $1;}
  | STRING {$$=$1;}
  | Identifier {$$=$1;}
  | PNULL {$$=$1;}
  ;

ArgList : ArgList ',' expr {
  $$=append_arglist($1,$3);
} 
| expr {
  $$=create_arglist($1);
}

Identifier : ID {
    struct tnode* IDNode = $1;
    int table_type = check_identifier(IDNode);
    // printf("%d\n",table_type);
    if (table_type==1) { //GLOBAL variable
        // Global variable-specific checks
        if (IDNode->Gentry->row>1) {
            printf("ERROR: ACCESSING ARRAY WITHOUT INDEX %s\n", IDNode->varname);
            exit(1);
        }
    }
    $$ = IDNode;
}
| ID '[' index ']' {
    struct tnode* IDNode = $1;
    int table_type = check_identifier(IDNode);
    if (table_type==1) {//GLOBAL variable
        // Array-specific checks
        if (IDNode->Gentry->col != -1) {
            printf("ERROR: ACCESSING A 2D-ARRAY VARIABLE %s\n", IDNode->varname);
            exit(1);
        }
    }
    $$ = makeNonLeafNode($1, $3, ARRAY_NODE, "_");
}
| ID '[' index ']' '[' index ']' {
    struct tnode* IDNode = $1;
    int table_type = check_identifier(IDNode);
    if (table_type==1) {//GLOBAL variable
        if (IDNode->Gentry->col == -1) {
            printf("ERROR: THIS IS NOT A 2-D ARRAY %s\n", IDNode->varname);
            exit(1);
        }
    }
    struct tnode* _2d_array_node = makeNonLeafNode($3, $6, _2D_ARRAY_NODE, "_");
    $$ = makeNonLeafNode($1, _2d_array_node, ARRAY_NODE, "_");
}
| MUL ID {
    struct tnode* IDNode = $2;
    int table_type = check_identifier(IDNode);
    if (table_type == 1) {//GLOBAL variable
        // Pointer dereferencing checks
        if (strcmp(IDNode->Gentry->type->name,"pointer(int)")!=0 && strcmp(IDNode->Gentry->type->name,"pointer(str)")!=0) {
            printf("ERROR: DEREFERENCING A NON-POINTER VARIABLE %s\n", IDNode->Gentry->name);
            exit(1);
        }
        IDNode->type = (strcmp(IDNode->Gentry->type->name,"pointer(int)")==0) ? TLookup("int") : TLookup("str");
    }else{//LOCAL variable
      if (strcmp(IDNode->Lentry->type->name,"pointer(int)")!=0 && strcmp(IDNode->Lentry->type->name,"pointer(str)")!=0 ) {
            printf("ERROR: DEREFERENCING A NON-POINTER VARIABLE %s\n", IDNode->Lentry->name);
            exit(1);
        }
      IDNode->type = (strcmp(IDNode->Lentry->type->name,"pointer(int)")==0) ? TLookup("int") : TLookup("str");
    }

    struct tnode* dereference_node = makeNonLeafNode(IDNode, NULL, DEREFERENCE_NODE, "_");
    dereference_node->type = IDNode->type;
    $$ = dereference_node;
}
| '&' Identifier {
    struct tnode* IDNode = $2;
    int table_type = check_identifier(IDNode);
    if (table_type == 1) {//GLOBAL variable
        struct tnode* addressNode = makeNonLeafNode(IDNode, NULL, ADDRESS_NODE, "_");
        struct Gsymbol* Gentry = IDNode->Gentry;
        if(IDNode->nodetype==ARRAY_NODE){
          Gentry=IDNode->left->Gentry;
          printf("%d\n",IDNode->right->nodetype);
        }
        addressNode->type = (strcmp(Gentry->type->name,"int")==0 || strcmp(Gentry->type->name,"pointer(int)")==0 )
                                ? TLookup("pointer(int)")
                                : TLookup("pointer(str)");
        $$ = addressNode;
    }else{//LOCAL variable
      struct tnode* addressNode = makeNonLeafNode(IDNode, NULL, ADDRESS_NODE, "_");
        addressNode->type = (strcmp(IDNode->Lentry->type->name,"int")==0 || strcmp(IDNode->Lentry->type->name,"pointer(int)")==0 )
                                ? TLookup("pointer(int)")
                                : TLookup("pointer(str)");
        $$ = addressNode;
    }
}
| Field {
  struct tnode* field_node =makeNonLeafNode($1,NULL,FIELD_NODE,"_");
  //field validation
  struct tnode* temp = field_node->left;
  struct tnode* identifier_node = field_node->left;
  struct Typetable* curr_type ;
  char* field_name;
  int scope_of_var = check_identifier(temp);
  if(scope_of_var==1){//identifer exists in Gsymbol table;
    curr_type = temp->Gentry->type;
  }
  else if(scope_of_var==2){//Lsymbol variable
    curr_type = temp->Lentry->type;
  }
  else{
    printf("ERROR: variable not declared !! :%s\n",temp->varname);
    return -1;
  }
  while(temp!=NULL){
    
    if(temp->left!=NULL){
      field_name = temp->left->varname;
    }else break;
    struct Fieldlist* curr_field = FLookup(curr_type,field_name);
    if(curr_field==NULL){
      printf("ERROR: Field doesn't exist for type : %s %s\n",curr_type->name,field_name);
      return -1;
    }else{
      curr_type = curr_field->type;
    }
    temp=temp->left;
  }
  field_node->type=curr_type;
  // printf("%s\n",field_node->type->name);
  $$ = field_node;
}
;

Field : Field '.' ID {
  struct tnode* temp = $1;
  while(temp->left!=NULL){
    temp=temp->left;
  }
  temp->left=$3;
  $$=$1;
}
| ID '[' index ']' '.' ID  {
  // printf("Array field\n");
  $1->left =$6;
  $1->right = $3;
  if($3->nodetype==CONST_NODE){
    if($3->val>=$1->Gentry->row){
      printf("ERROR:Array Out of bounds:%s\n ",$1->Gentry->name);
      return -1;
    }
  }
  $$ =  $1;
}
| ID '.' ID {
  if($1->Gentry->row>1){
    printf("ERROR: accessing an Array value without indexing %s\n",$1->Gentry->name);
    return -1;
  }
  $1->left = $3;
  $$=$1;
}
;

index : expr {
    if(strcmp($1->type->name,"int")!=0){
      printf("ERROR:indexing by a non-int type \n");
      return -1;
    }
    $$=$1;
  }
;

%%

void yyerror(char const *s)
{
    printf("yyerror %s",s);
}


int main(void) {
  FILE* input_file = fopen("input.expl","r");
  yyin = input_file;
  TypeTableCreate();
  yyparse();

 return 0;
}