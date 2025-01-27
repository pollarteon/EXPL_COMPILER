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
%}

%union{
  struct tnode *no;
  struct ParamList* plist;
  struct FuncArgs* arglist;
  int integer;
}
%type <no> expr NUM STRING program END ID Slist Stmt
%type <no> InputStmt OutputStmt AsgStmt WhileStmt Ifstmt 
%type <no> BreakStmt ContinueStmt DoWhileStmt ReturnStmt BreakpointStmt
%type <no> Identifier index
%type <no>  FdefBlock MainBlock Gdecl GidList Gid
%type <no> Fdef  LdeclBlock Body LdecList Ldecl IdList Lid
%type <integer> Type
%type <plist> ParamList Param
%type <arglist> ArgList
%token NUM STRING PLUS MINUS MUL DIV MOD END PBEGIN READ WRITE ID IF ELSE THEN ENDIF ENDWHILE WHILE OR AND LT GT LTE GTE EQUALS NOTEQUALS DO BREAK CONTINUE DECL ENDDECL INT STR MAIN RETURN BREAKPOINT
%left OR
%left AND
%left EQUALS NOTEQUALS
%left LT LTE GT GTE
%left PLUS MINUS
%left MUL DIV MOD


%%

program : GDeclBlock FdefBlock MainBlock{printf("Program finished\n");exit(1);}
  | GDeclBlock MainBlock {printf("Program finished\n");exit(1);} 
  | MainBlock {printf("Program finished\n");exit(1);};
  | GDeclBlock PBEGIN Slist END {printf("Program finished\n");exit(1);}
  ;
//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------
/// GLOBAL DECLARATIONS SYNTAX
//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------

GDeclBlock : DECL GdeclList ENDDECL {print_GSymbolTable();L_cleanup();local_binding=1;param_binding=1;}
| DECL ENDDECL {} ;

GdeclList : GdeclList Gdecl {} | Gdecl {};

Gdecl : Type GidList ';' {
  int declaration_type = $1;
  struct tnode* varList = $2; //varList contains List of variables
  while(varList!=NULL){
    struct Gsymbol* Gentry = GLookUp(varList->varname);
    if(Gentry->type==POINTER_TYPE){ //if variable inserted as a pointer type
      if(declaration_type==INTEGER_TYPE){
        Gentry->type = POINTER_INT_TYPE;
      }
      if(declaration_type==STRING_TYPE){
        Gentry->type =POINTER_STR_TYPE;
      }
    }
    else if(Gentry->type==-1){
      Gentry->type = declaration_type;
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
  G_Install($1->varname,-1,1,-1,NULL,-1);
   $$=createNode(-1,1,-1,-1,NULL,$1->varname,-1,NULL,NULL);
}
| ID '[' NUM ']'{
  G_Install($1->varname,-1,$3->val,-1,NULL,-1);
  $$=createNode(-1,$3->val,1,1,NULL,$1->varname,-1,NULL,NULL);
}
| ID '[' NUM ']' '[' NUM ']'{
  G_Install($1->varname,-1,$3->val,$6->val,NULL,-1);
   $$ = createNode(-1,$3->val,$6->val,1,NULL,$1->varname,-1,NULL,NULL);
}
| MUL ID { //this is for Pointer
  G_Install($2->varname,POINTER_TYPE,1,-1,NULL,-1);
  $$ = createNode(-1,1,-1,POINTER_TYPE,NULL,$2->varname,-1,NULL,NULL);
}
| ID '(' ParamList ')' {
  G_Install($1->varname,-1,1,-1,$3,flabel++);
  $$ = createNode(-1,1,-1,-1,NULL,$1->varname,-1,NULL,NULL);
}
| ID '(' ')'{
  G_Install($1->varname,-1,1,-1,NULL,flabel++);
  $$ = createNode(-1,1,-1,-1,NULL,$1->varname,-1,NULL,NULL);
}
;
//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------
// FUNCTION DEFINITION SYNTAX
//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------

FdefBlock : FdefBlock Fdef | Fdef;

Fdef : Type ID '(' ParamList ')' '{' LdeclBlock Body '}' {
  int definition_type = $1;
  struct ParamList* defintion_param_list = $4;
  struct Gsymbol* Gentry = $2->Gentry;
  if(Gentry==NULL){
    printf("ERROR: FUNCTION NOT DECLARED %s\n",$2->varname);
    return -1;
  }
  //checking param equivalence
  struct ParamList* temp1 = defintion_param_list;
  struct ParamList* temp2 = Gentry->param_list;
  while(temp1!=NULL && temp2!=NULL){
    if(strcmp(temp1->name,temp2->name)!=0 || temp1->type!=temp2->type){
      printf("ERROR: FUNCTION MISMATCH %s\n",Gentry->name);
      return -1;
    }
    temp1=temp1->next;
    temp2=temp2->next;
  }
  if(temp1!=NULL || temp2!=NULL){
    printf("ERROR: FUNCTION DECLARATION UNMATCHED: %s\n",Gentry->name);
    return -1;
  }
  //Generating Header and Cleaning Up Local Symbol Table
  FILE* target_file = fopen("code.xsm","a");
  if(!begin_flag){
      fclose(target_file);
      target_file = fopen("code.xsm","w");
      header_code_gen(target_file);
      begin_flag=1;
    }
    print_Ltable();
    printf("Preorder of Syntax Tree : ");
    preorder($8);
    printf("\n\n");
    returnStmt_checker($8,$1); //return statement checker..............
    fprintf(target_file,"F%d:\n",Gentry->flabel);
    function_begin_code_gen(target_file,Ltable);
    code_gen($8,target_file);
    L_cleanup();
    local_binding=1;
    param_binding=1;
    fclose(target_file);
}
| Type ID '(' ')' '{' LdeclBlock Body '}'{
  int definition_type = $1;
  struct Gsymbol* Gentry = GLookUp($2->varname);
  if(Gentry==NULL){
    printf("ERROR: FUNCTION NOT DECLARED %s\n",$2->varname);
    return -1;
  }
  //checking param equivalence
  if(Gentry->param_list==NULL){
    FILE* target_file = fopen("code.xsm","w");
    print_Ltable();
    printf("Preorder of Syntax Tree : ");
    preorder($7);
    printf("\n\n");
    returnStmt_checker($7,$1); //return statement checker..............
    fprintf(target_file,"F%d:\n",Gentry->flabel);
    function_begin_code_gen(target_file,Ltable);
    code_gen($7,target_file);
    L_cleanup();
    local_binding=1;
    param_binding=1;
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
  L_Install($2->varname,$1,1);
  $$ = create_param_list($1,$2->varname);
}
| Type MUL ID{
  int declaration_type = $1;
  int Lentry_type;
  if(declaration_type==INTEGER_TYPE){
    Lentry_type = POINTER_INT_TYPE;
  }else{
    Lentry_type = POINTER_STR_TYPE;
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
    returnStmt_checker($7,INTEGER_TYPE);
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
  int declaration_type = $1;
  struct tnode* varList = $2; //varList contains List of variables

  while(varList!=NULL){
    struct Lsymbol* Lentry = LLookUp(varList->varname);
    if(Lentry==NULL){
      if(varList->type==POINTER_TYPE){
        if(declaration_type==INTEGER_TYPE){
          L_Install(varList->varname,POINTER_INT_TYPE,0);
        }
        if(declaration_type==STRING_TYPE){
          L_Install(varList->varname,POINTER_STR_TYPE,0);
        }
      }
      else
      L_Install(varList->varname,declaration_type,0);
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
   $$=createNode(-1,1,-1,-1,NULL,$1->varname,-1,NULL,NULL);
}
| MUL ID { //this is for Pointer
  $$ = createNode(-1,1,-1,POINTER_TYPE,NULL,$2->varname,-1,NULL,NULL);
};
//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------
//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------

Body :PBEGIN Slist ReturnStmt END {$$ = createNode(-1,1,1,-1,NULL,NULL,CONNECTOR_NODE,$2,$3);};


Type : INT {$$ = INTEGER_TYPE;} 
| STR {$$ = STRING_TYPE;}

Slist : Slist Stmt {
  $$=createNode(-1,1,1,-1,NULL,NULL,CONNECTOR_NODE,$1,$2);
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
  struct tnode* statements_node = makeNonLeafNode($6,$8,ELSE_NODE,"_");
  $$ = makeNonLeafNode($3,statements_node,IF_NODE,"_");
}
| IF '(' expr ')' THEN Slist ENDIF ';' {$$ = makeNonLeafNode($3,$6,IF_NODE,"_");}
;

WhileStmt : WHILE '(' expr ')' DO Slist ENDWHILE ';' {$$ = makeNonLeafNode($3,$6,WHILE_NODE,"_");}

DoWhileStmt : DO Slist WHILE '(' expr ')' ';' {$$ = makeNonLeafNode($5,$2,DO_WHILE_NODE,"_");}

ReturnStmt : RETURN expr ';' {$$ = makeNonLeafNode($2,NULL,RETURN_NODE,"_");}

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
        if (IDNode->Gentry->type != POINTER_INT_TYPE && IDNode->Gentry->type != POINTER_STR_TYPE) {
            printf("ERROR: DEREFERENCING A NON-POINTER VARIABLE %s\n", IDNode->Gentry->name);
            exit(1);
        }
        IDNode->type = (IDNode->Gentry->type == POINTER_INT_TYPE) ? INTEGER_TYPE : STRING_TYPE;
    }else{//LOCAL variable
      if (IDNode->Lentry->type != POINTER_INT_TYPE && IDNode->Lentry->type != POINTER_STR_TYPE) {
            printf("ERROR: DEREFERENCING A NON-POINTER VARIABLE %s\n", IDNode->Lentry->name);
            exit(1);
        }
      IDNode->type = (IDNode->Lentry->type == POINTER_INT_TYPE) ? INTEGER_TYPE : STRING_TYPE;
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
        addressNode->type = (Gentry->type == INTEGER_TYPE || Gentry->type == POINTER_INT_TYPE)
                                ? POINTER_INT_TYPE
                                : POINTER_STR_TYPE;
        $$ = addressNode;
    }else{//LOCAL variable
      struct tnode* addressNode = makeNonLeafNode(IDNode, NULL, ADDRESS_NODE, "_");
        addressNode->type = (IDNode->Lentry->type == INTEGER_TYPE || IDNode->Lentry->type == POINTER_INT_TYPE)
                                ? POINTER_INT_TYPE
                                : POINTER_STR_TYPE;
        $$ = addressNode;
    }
}
;

index : expr {$$=$1;}

%%

yyerror(char const *s)
{
    printf("yyerror %s",s);
}


int main(void) {
  FILE* input_file = fopen("input.txt","r");
  yyin = input_file;
 yyparse();

 return 0;
}