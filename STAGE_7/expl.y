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
%token  PLUS MINUS MUL DIV MOD PBEGIN READ WRITE  IF ELSE THEN ENDIF ENDWHILE WHILE OR AND LT GT LTE GTE EQUALS 
%token NOTEQUALS DO BREAK CONTINUE DECL ENDDECL INT STR MAIN RETURN BREAKPOINT TYPE ENDTYPE  ALLOC INITIALIZE FREE
%token CLASS ENDCLASS SELF EXTENDS NEW DELETE
%token <no> NUM STRING END ID PNULL
%type <no> expr program Slist Stmt
%type <no> InputStmt OutputStmt AsgStmt WhileStmt Ifstmt NewStmt 
%type <no> BreakStmt ContinueStmt DoWhileStmt ReturnStmt BreakpointStmt
%type <no> Identifier index
%type <no>  FdefBlock MainBlock Gdecl GidList Gid
%type <no> Fdef  LdeclBlock Body LdecList Ldecl IdList Lid Field
%type <no>  initializeStmt AllocStmt FreeStmt
%type <no> ClassDefBlock ClassDefList Classdef  MethodDecl Mdecl MethodDefns 
%type <no> FieldFunction
%type <string> Type TypeName Cname
%type <plist> ParamList Param
%type <arglist> ArgList
%type <fieldlist> FieldDecl FieldDeclList Cfield CFieldlists

%left OR
%left AND
%left EQUALS NOTEQUALS
%left LT LTE GT GTE
%left PLUS MINUS
%left MUL DIV MOD


%%

program :TypeDefBlock ClassDefBlock GDeclBlock FdefBlock MainBlock{printf("Program Finished\n");exit(1);}
  | TypeDefBlock ClassDefBlock GDeclBlock  MainBlock{printf("Program Finished\n");exit(1);}
  | TypeDefBlock ClassDefBlock MainBlock{printf("Program Finished\n");exit(1);}
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
  $$ = Fcreate($2->varname,0,type,NULL);
}

TypeName : INT {$$="int";}
  | STR {$$="str";}
  | ID {$$=$1->varname;};
  ;
//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------
/// CLASS DECLARATIONS SYNTAX
//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------

ClassDefBlock : CLASS ClassDefList ENDCLASS {Print_Classtable();}
| {}
;

ClassDefList : ClassDefList Classdef {}
| Classdef {}
;

Classdef : Cname '{' DECL CFieldlists MethodDecl ENDDECL MethodDefns '}' {
    struct Classtable* class = Clookup($1);

    if(TLookup($1)){
      printf("ERROR:class and userdefined type must not have the same name: %s\n",$1);
      return -1;
    }
    class->memberField = cptr->memberField;
    struct Fieldlist* field_traverser = class->memberField;
    int field_index =0;
    while(field_traverser!=NULL){
     
      if(field_index>7){
        printf("ERROR: not more than 8 member Fields allowed for a Class %s\n",$1);
        return -1;
      }
      field_traverser->fieldIndex = field_index++;
      field_traverser=field_traverser->next;
    }
    class->field_count = field_index;
    PrintFieldlist(class->memberField);
    // Print_VirtFuncTable(cptr);
    cptr=NULL;
    
  }
  ;

Cname : ID {
    cptr =CInstall($1->varname,NULL);
    $$=$1->varname;
  };



CFieldlists : CFieldlists Cfield {Class_Finstall(cptr,$2);}
| Cfield {Class_Finstall(cptr,$1);}

Cfield : TypeName ID ';' {
  struct Typetable* type = TLookup($1);
  struct Classtable* class = Clookup($1);
  if(type==NULL && class==NULL){
    printf("ERROR: Type/Class is undefined %s\n",$1);
  }
  $$ = Fcreate($2->varname,0,type,class);
}

MethodDecl : Mdecl MethodDecl {L_cleanup();local_binding=1;param_binding=1;}
| {}
;

Mdecl : TypeName ID '(' ParamList ')' ';'{
  Class_Minstall(cptr,$2->varname,TLookup($1),$4);
}
| TypeName ID '(' ')' ';' {
  Class_Minstall(cptr,$2->varname,TLookup($1),NULL);
}
MethodDefns : FdefBlock {
    Print_Classtable();
    PrintFieldlist(cptr->memberField);
  };
| {}
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
  struct Classtable* class_table_entry = Clookup(declaration_type);
  struct tnode* varList = $2; //varList contains List of variables
  
  int isClassType =0;//to check whether the global declaration was a class or user defined type
  if(declaration_type_entry==NULL)isClassType=1;
  
  while(varList!=NULL){
    struct Gsymbol* Gentry = GLookUp(varList->varname);
    if(isClassType && Gentry->flabel!=-1){
      printf("ERROR:function return type cannot be a Class: %s\n",varList->varname);
      return -1;
    }
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
    Gentry->type = declaration_type_entry;
    Gentry->Ctype = class_table_entry;
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

FdefBlock : FdefBlock Fdef | Fdef ;

Fdef : Type ID '(' ParamList ')' '{' LdeclBlock Body '}' {
  char* definition_type = $1;
  struct ParamList* defintion_param_list = $4;
  struct Gsymbol* Gentry = $2->Gentry;
  struct Memberfunclist* member_function ;
  int is_member_function =0;
  if(cptr){
     member_function = Class_Mlookup(cptr,$2->varname);
     if(member_function==NULL){
      printf("ERROR: member function (%s) not declared in class %s\n",$2->varname,cptr->name);
      return -1;
     }
     is_member_function =1;
  }
  if(!is_member_function && Gentry==NULL){
    printf("ERROR: FUNCTION NOT DECLARED %s\n",$2->varname);
    return -1;
  }
  //checking return type equivalence
  if(!is_member_function && strcmp(definition_type,Gentry->type->name)!=0){
    printf("ERROR: FUNCTION RETURN TYPE NOT MATCHING WITH DECLARATION\n");
    return -1;
  }
  else if(is_member_function && strcmp(definition_type,member_function->type->name)!=0){
    printf("ERROR: FUNCTION RETURN TYPE NOT MATCHING WITH DECLARATION\n");
    return -1;
  }

  //checking param equivalence
  struct ParamList* temp1 = defintion_param_list;
  struct ParamList* temp2;
  if(!is_member_function){
    temp2 = Gentry->param_list;
  }else{
    temp2 = member_function->paramlist;
  }
  while(temp1!=NULL && temp2!=NULL){
    if(strcmp(temp1->name,temp2->name)!=0 || strcmp(temp1->type->name,temp2->type->name)!=0){
      printf("ERROR: FUNCTION MISMATCH %s\n",$2->varname);
      return -1;
    }
    temp1=temp1->next;
    temp2=temp2->next;
  }
  if(temp1!=NULL || temp2!=NULL){
    printf("ERROR: FUNCTION DECLARATION MISMATCHED: %s\n",$2->varname);
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
    if(!is_member_function)
      fprintf(target_file,"F%d:\n",Gentry->flabel);
    else
      fprintf(target_file,"F%d:\n",member_function->Flabel);
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
  struct Memberfunclist* member_function;
  int is_member_function =0;
  if(cptr){
     member_function = Class_Mlookup(cptr,$2->varname);
     if(member_function==NULL){
      printf("ERROR: member function (%s) not declared in class %s\n",$2->varname,cptr->name);
      return -1;
     }
     is_member_function =1;
  }
  if(!is_member_function && Gentry==NULL){
    printf("ERROR: FUNCTION NOT DECLARED %s\n",$2->varname);
    return -1;
  }
  //checking return type equivalence
  if(!is_member_function && strcmp(definition_type,Gentry->type->name)!=0){
    printf("ERROR: FUNCTION RETURN TYPE NOT MATCHING WITH DECLARATION\n");
    return -1;
  }
  else if(is_member_function && strcmp(definition_type,member_function->type->name)!=0){
    printf("ERROR: FUNCTION RETURN TYPE NOT MATCHING WITH DECLARATION\n");
    return -1;
  }

  //checking param equivalence
  if((!is_member_function && Gentry->param_list==NULL)|| (is_member_function && member_function->paramlist==NULL)){
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
      if(!is_member_function)
      fprintf(target_file,"F%d:\n",Gentry->flabel);
    else
      fprintf(target_file,"F%d:\n",member_function->Flabel);
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
    entry_code_gen(target_file);
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
  if(declaration_type_entry==NULL){
    printf("ERROR:Class cannot be declared locally %s\n",declaration_type);
    return -1;
  }
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
    if(TLookup($1->varname)==NULL && Clookup($1->varname)==NULL){
      printf("ERROR : The Following type/class is not user-defined %s\n",type_name);
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
|NewStmt {$$=$1;}
// |DeleteStmt {$$=$1;}



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

NewStmt : Identifier '=' NEW '(' Type ')' ';' {
    if($1->Ctype==NULL){
      printf("ERROR: syntax error NEW assignment to non-class type\n");
      return -1;
    }
    if(strcmp($1->Ctype->name,$5)!=0){
      printf("ERROR: class type mismatch in NEW statement\n");
      return -1;
    }
    $$=makeNonLeafNode($1,NULL,NEW_NODE,"_");
  }

// DeleteStmt : DELETE '(' ID ')' ';' {};

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
  | FieldFunction {
    $$ = $1;
  }
  ;

ArgList : ArgList ',' expr {
  $$=append_arglist($1,$3);
} 
| expr {
  $$=create_arglist($1);
}
| {$$=NULL;}

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
  struct tnode* field_node = makeNonLeafNode($1, NULL, FIELD_NODE, "_");
  field_validifier(field_node);  
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
  $1->right = $3; //stores the size of the 1-D array
 
  check_identifier($1);
  if($3->nodetype==CONST_NODE){
    if($3->val>=$1->Gentry->row){
      printf("ERROR:Array Out of bounds:%s\n ",$1->Gentry->name);
      return -1;
    }
  }
  $$ =  $1;
}
| ID '.' ID {
  // printf("re");
  check_identifier($1);
  if($1->Gentry!=NULL && $1->Gentry->row>1){
    printf("ERROR: accessing an Array value without indexing %s\n",$1->Gentry->name);
    return -1;
  }
  $1->left = $3;
  $$=$1;
}
| SELF '.' ID {
  if(!cptr){//self is called outside the class definition
    printf("ERROR: \"self\" keyword is used under class definition\n");
    return -1;
  }

  struct tnode* self_node= makeNonLeafNode($3,NULL,SELF_NODE,"_");
  self_node->Ctype = cptr;
  $$=self_node;
}
;

FieldFunction : ID '.' ID '(' ArgList ')'{
  struct tnode* function_node = makeNonLeafNode($3,$1,FUNCTION_NODE,"_");

  check_identifier($1);
  struct Memberfunclist* member_function = Class_Mlookup($1->Ctype,$3->varname);
  if(member_function==NULL){
    printf("ERROR: no such method exists for class %s\n",$1->Ctype->name);
    return -1;
  }
  function_node->argList =$5;
  function_node->type = member_function->type; 
  function_node->varname = strdup($3->varname);
  $$=function_node;
}
| SELF '.' ID '(' ArgList ')'{
  if(!cptr){
    printf("ERROR: \"self\" keyword is used under class definition\n");
    return -1;
  }
  struct tnode* class_node = makeNonLeafNode(NULL,NULL,SELF_NODE,"_");
  class_node->Ctype = cptr;
  struct tnode* function_node = makeNonLeafNode($3,class_node,FUNCTION_NODE,"_");
  struct Memberfunclist* member_function = Class_Mlookup(cptr,$3->varname);
  if(member_function==NULL){
    printf("ERROR: no such method exists for class %s\n",cptr->name);
    return -1;
  }
  function_node->argList =$5;
  function_node->Ctype = NULL;
  function_node->type = member_function->type;
  function_node->varname = strdup($3->varname);
  $$=function_node;
}
| Field '.' ID '(' ArgList ')'{
  struct tnode* field_node = makeNonLeafNode($1, NULL, FIELD_NODE, "_");
  field_validifier(field_node);  
  struct tnode* function_node = makeNonLeafNode($3,field_node,FUNCTION_NODE,"_");
 
  struct Memberfunclist* member_function = Class_Mlookup(field_node->Ctype,$3->varname);
  // Print_VirtFuncTable($1->Ctype);
  if(member_function==NULL){
    printf("ERROR: no such method exists for class %s\n",field_node->Ctype->name);
    return -1;
  }
  function_node->argList =$5;
  function_node->type = member_function->type; 
  function_node->varname = strdup($3->varname);
  $$=function_node;
}
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