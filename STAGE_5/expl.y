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
  int integer;
}
%type <no> expr NUM STRING program END ID Slist Stmt
%type <no> InputStmt OutputStmt AsgStmt WhileStmt Ifstmt 
%type <no> BreakStmt ContinueStmt DoWhileStmt 
%type <no> Identifier index
%type <no>  FdefBlock MainBlock Gdecl GidList Gid
%type <no> Fdef  LdeclBlock Body LdecList Ldecl IdList ArgList Lid
%type <integer> Type
%type <plist> ParamList Param
%token NUM STRING PLUS MINUS MUL DIV MOD END PBEGIN READ WRITE ID IF ELSE THEN ENDIF ENDWHILE WHILE OR AND LT GT LTE GTE EQUALS NOTEQUALS DO BREAK CONTINUE DECL ENDDECL INT STR MAIN
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

GDeclBlock : DECL GdeclList ENDDECL {print_GSymbolTable();}
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
  struct Gsymbol* Gentry = GLookUp($2->varname);
  if(Gentry==NULL){
    printf("ERROR: FUNCTION NOT DECLARED %s\n",$2->varname);
    return -1;
  }
  //checking param equivalence
  if(Gentry->param_list!=NULL){
    struct ParamList* temp1 = defintion_param_list;
    struct ParamList* temp2 = Gentry->param_list;
    if(strcmp(temp1->name,temp2->name)!=0 || temp1->type!=temp2->type){
      printf("ERROR: FUNCTION MISMATCH %s\n",Gentry->name);
      return -1;
    }
  }else{
    printf("ERROR: FUNCTION DECLARATION UNMATCHED\n");
    return -1;
  }
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
    fprintf(target_file,"F%d:\n",Gentry->flabel);
    
    code_gen($8,target_file);
    L_cleanup();
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
    code_gen($7,target_file);
    L_cleanup();
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
  $$ = create_param_list($1,$2->varname);
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
    fprintf(target_file,"MAIN:\n");
    int result_reg =code_gen($7,target_file);
    L_cleanup();
    fclose(target_file);
}


//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------
//LOCAL DECLARATION BLOCK
//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------

LdeclBlock : DECL LdecList ENDDECL {} | DECL ENDDECL {};

LdecList : LdecList  Ldecl {} | Ldecl {};

Ldecl : Type IdList ';' {
  int declaration_type = $1;
  struct tnode* varList = $2; //varList contains List of variables

  while(varList!=NULL){
    struct Lsymbol* Lentry = LLookUp(varList->varname);
    if(Lentry==NULL){
      if(varList->type==POINTER_TYPE){
        if(declaration_type==INTEGER_TYPE){
          L_Install(varList->varname,POINTER_INT_TYPE);
        }
        if(declaration_type==STRING_TYPE){
          L_Install(varList->varname,POINTER_STR_TYPE);
        }
      }
      else
      L_Install(varList->varname,declaration_type);
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

Body :PBEGIN Slist END {$$ = $2;};

Type : INT {$$ = INTEGER_TYPE;} 
| STR {$$ = STRING_TYPE;}

Slist : Slist Stmt {
  $$=createNode(-1,1,1,-1,NULL,NULL,CONNECTOR_NODE,$1,$2);
}
| Stmt {$$=$1;};
;

Stmt : InputStmt {$$=$1;} 
| OutputStmt {$$=$1;}
|AsgStmt {$$=$1;}
|Ifstmt {$$=$1;}
|WhileStmt {$$=$1;}
|DoWhileStmt {$$=$1;}
|BreakStmt {$$=$1;}
|ContinueStmt {$$=$1;}
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

ContinueStmt : CONTINUE ';' {$$=makeNonLeafNode(NULL,NULL,CONTINUE_NODE,"_");}

Ifstmt : IF '(' expr ')' THEN Slist ELSE Slist ENDIF ';' {
  struct tnode* statements_node = makeNonLeafNode($6,$8,ELSE_NODE,"_");
  $$ = makeNonLeafNode($3,statements_node,IF_NODE,"_");
}
| IF '(' expr ')' THEN Slist ENDIF ';' {$$ = makeNonLeafNode($3,$6,IF_NODE,"_");}
;

WhileStmt : WHILE '(' expr ')' DO Slist ENDWHILE ';' {$$ = makeNonLeafNode($3,$6,WHILE_NODE,"_");}

DoWhileStmt : DO Slist WHILE '(' expr ')' ';' {$$ = makeNonLeafNode($5,$2,DO_WHILE_NODE,"_");}

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
  | ID '(' ')' 
  | ID '(' ArgList ')'
  | '(' expr ')'  {$$ = $2;}
  | NUM   {$$ = $1;}
  | STRING {$$=$1;}
  | Identifier {$$=$1;}
  
  ;

ArgList : ArgList ',' expr | expr

Identifier : ID {
  struct tnode* IDNode = $1;
  // printf("%s\n",IDNode->varname);
  struct Gsymbol* Gentry = IDNode->Gentry;
  if(Gentry==NULL){
    printf("ERROR: UNDECLARED VARIABLE %s\n",IDNode->varname);
    exit(1);
  } 
  else{
    //checking if the identifier was declared as an Array
    if(Gentry->col!=-1){
      printf("ERROR: ACCESSING ARRAY WITHOUT INDEX %s\n",IDNode->varname);
      exit(1);
    }
  }
  IDNode->type = Gentry->type;
  $$=IDNode;
}
  | ID '[' index ']'{
    // printf("ARRAY\n");
    struct tnode* IDNode = $1;
    struct Gsymbol* Gentry = IDNode->Gentry;
    // printf("%s\n",IDNode->varname);
    if(Gentry==NULL){
      printf("ERROR: UNDECLARED VARIABLE %s\n",IDNode->varname);
      exit(1);
    }
    if(Gentry->col!=-1){
      printf("ERROR: THIS IS AN 2-D ARRAY %s\n",IDNode->varname);
      exit(1);
    }
    IDNode->type= Gentry->type;
    $$=makeNonLeafNode($1,$3,ARRAY_NODE,"_");
  
  }
  | ID '[' index ']' '[' index ']'{
    struct tnode* IDNode = $1;
    struct Gsymbol* Gentry = IDNode->Gentry;
    if(Gentry==NULL){
      printf("ERROR: UNDECLARED VARIABLE %s\n",IDNode->varname);
      exit(1);
    }
    IDNode->type = Gentry->type;
    struct tnode* _2d_array_node = makeNonLeafNode($3,$6,_2D_ARRAY_NODE,"_");
    $$ = makeNonLeafNode($1,_2d_array_node,ARRAY_NODE,"_");
  }
  | MUL ID {
    struct tnode* IDNode = $2;
    struct tnode* dereference_node ;
    struct Gsymbol* Gentry = IDNode->Gentry;
    if(Gentry==NULL){
      printf("ERROR: UNDECLARED VARIABLE %s\n",IDNode->varname);
      exit(1);
    }
    if (Gentry->type != POINTER_INT_TYPE && Gentry->type != POINTER_STR_TYPE){
      printf("%d\n",Gentry->type);
      printf("ERROR: DEREFERENCING A NON_POINTER VARIABLE %s\n",Gentry->name);
      exit(1);
    }
    if (Gentry->type == POINTER_INT_TYPE){
      IDNode->type = INTEGER_TYPE;
    }
    else
      IDNode->type=STRING_TYPE;
    printf("type :%d\n",IDNode->type);
    dereference_node = makeNonLeafNode(IDNode,NULL,DEREFERENCE_NODE,"_");
    dereference_node->type = IDNode->type;
    $$ = dereference_node;
  }
  | '&' Identifier {
    struct tnode* IDNode = $2;
    struct Gsymbol* Gentry = IDNode->Gentry;
    if(IDNode->nodetype==ARRAY_NODE){
      Gentry = IDNode->left->Gentry;
    }
    if(Gentry==NULL){
      printf("ERROR: UNDECLARED VARIABLE %s\n",IDNode->varname);
      exit(1);
    }
    IDNode->type = Gentry->type;
    struct tnode* addressNode = makeNonLeafNode(IDNode,NULL,ADDRESS_NODE,"_");
    // printf("%d\n",Gentry->type);
    if(Gentry->type == INTEGER_TYPE || Gentry->type==POINTER_INT_TYPE)
    addressNode->type = POINTER_INT_TYPE;
    else
    addressNode->type = POINTER_STR_TYPE;
    // printf("%d\n",addressNode->type);
    $$ = addressNode;
  }

index : NUM {$$=$1;}
  | Identifier {$$=$1;}

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