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
  int integer;
}
%type <no> expr NUM STRING program END ID Slist Stmt InputStmt OutputStmt AsgStmt WhileStmt Ifstmt BreakStmt ContinueStmt DoWhileStmt Declarations DeclList Decl Varlist Identifier index
%type <integer> Type
%token NUM STRING PLUS MINUS MUL DIV MOD END PBEGIN READ WRITE ID IF ELSE THEN ENDIF ENDWHILE WHILE OR AND LT GT LTE GTE EQUALS NOTEQUALS DO BREAK CONTINUE DECL ENDDECL INT STR
%left OR
%left AND
%left EQUALS NOTEQUALS
%left LT LTE GT GTE
%left PLUS MINUS
%left MUL DIV MOD


%%

program : PBEGIN Declarations Slist END ';'{
    $$ = $3;
    // printf("reached Here\n");
    FILE* target_file = fopen("code.xsm","w");
    fprintf(target_file, "%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n",0,2056,0,0,0,0,0,0); 
    fprintf(target_file,"MOV SP,%d\n",binding_pos); //binding pos should contain the base of the stack after declarations
    printf("Preorder of Syntax Tree : ");
    preorder($3);
    printf("\n\n");
    
    int result_reg =code_gen($3,target_file);
    exit(1);
   }
  | PBEGIN Declarations END ';' {printf("only declarations in program"); exit(1);} 
  | PBEGIN END ';' {printf("Program finished");exit(1);};
  
  ;

Declarations : DECL DeclList ENDDECL  {}
| DECL ENDDECL {};

DeclList : DeclList Decl {}
| Decl {};

Decl : Type Varlist ';' {
  int declaration_type = $1;
  struct tnode* varList = $2;
  while(varList!=NULL){
    if(LookUp(varList->varname)==NULL){
      int row_num = varList->row;
      int col_num = varList->col;
      int type = varList->type;
      if(type==POINTER_TYPE){
        if(declaration_type==INTEGER_TYPE){
          G_Install(varList->varname,POINTER_INT_TYPE,row_num,col_num);
        }else{
          G_Install(varList->varname,POINTER_STR_TYPE,row_num,col_num);
        }
      }
      else
      G_Install(varList->varname,declaration_type,row_num,col_num);
    }else{
      printf("ERROR: REDECLARATION OF VARIABLE: %s\n",varList->varname);
      exit(1);
    }
    // free($2);
    varList=varList->right;
  }
  print_GSymbolTable();
};

Type : INT {$$ = INTEGER_TYPE;} 
| STR {$$ = STRING_TYPE;}

Varlist :Varlist ',' ID '[' NUM ']' '[' NUM ']' {
  struct tnode* IDNode = createNode(-1,$5->val,$8->val,-1,NULL,$3->varname,-1,NULL,NULL);
  struct tnode* temp = $1;
  while (temp->right != NULL) {  
      temp = temp->right;
  }
  temp->right = IDNode;  
  $$ = $1; 
}
| Varlist ',' MUL ID {
  // printf("POINTER Variable\n");
  struct tnode* IDNode = createNode(-1,1,-1,POINTER_TYPE,NULL,$4->varname,-1,NULL,NULL);
  struct tnode* temp = $1;
  while (temp->right != NULL) {  
      temp = temp->right;
  }
  temp->right = IDNode;  
  $$ = $1; 
}

| Varlist ',' ID '[' NUM ']' {
  struct tnode* IDNode = createNode(-1,$5->val,1,-1,NULL,$3->varname,-1,NULL,NULL);
  struct tnode* temp = $1;
  while (temp->right != NULL) {  
      temp = temp->right;
  }
  temp->right = IDNode;  
  $$ = $1; 
}
| Varlist ',' ID {
  struct tnode* IDNode = createNode(-1,1,-1,-1,NULL,$3->varname,-1,NULL,NULL);
  struct tnode* temp = $1;
  while (temp->right != NULL) {  
      temp = temp->right;
  }
  temp->right = IDNode;  
  $$ = $1; 
};
| ID '[' NUM ']' '[' NUM ']' {
  // printf("2D-ARRAY\n");
  $$ = createNode(-1,$3->val,$6->val,1,NULL,$1->varname,-1,NULL,NULL);
}
| ID '[' NUM ']'{
  // printf("%s\n",$1->varname);
  $$=createNode(-1,$3->val,1,1,NULL,$1->varname,-1,NULL,NULL);
}
| ID {
  // printf("%s\n",$1->varname);
    $$=createNode(-1,1,-1,-1,NULL,$1->varname,-1,NULL,NULL);
  };
| MUL ID {
  // printf("Pointer Variable\n");
  $$ = createNode(-1,1,-1,POINTER_TYPE,NULL,$2->varname,-1,NULL,NULL);
}

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
  | '(' expr ')'  {$$ = $2;}
  | NUM   {$$ = $1;}
  | STRING {$$=$1;}
  | Identifier {$$=$1;}
  
  ;

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