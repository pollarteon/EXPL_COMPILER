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
 int var_type;
}
%type <no> expr NUM program END ID Slist Stmt InputStmt OutputStmt AsgStmt WhileStmt Ifstmt BreakStmt ContinueStmt DoWhileStmt Declarations DeclList Decl Varlist Identifier
%type <var_type> Type
%token NUM PLUS MINUS MUL DIV END PBEGIN READ WRITE ID IF ELSE THEN ENDIF ENDWHILE WHILE OR AND LT GT LTE GTE EQUALS NOTEQUALS DO BREAK CONTINUE DECL ENDDECL INT STR
%left OR
%left AND
%left EQUALS NOTEQUALS
%left LT LTE GT GTE
%left PLUS MINUS
%left MUL DIV


%%

program : PBEGIN Declarations Slist END ';'{
    $$ = $3;
    // printf("reached Here\n");
    FILE* target_file = fopen("code.xsm","w");
    fprintf(target_file, "%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n",0,2056,0,0,0,0,0,0); 
    fprintf(target_file,"MOV SP,%d\n",binding_pos); //first 26 locations are reserved for a-z variables
    printf("Preorder of Syntax Tree : ");
    preorder($3);
    printf("\n\n");
    // evaluator($2);
    int result_reg =code_gen($3,target_file);
    exit(1);
   }
  | PBEGIN Declarations END ';' {printf("only declarations in program"); exit(1);} 
  | PBEGIN END ';' {printf("Program finished");exit(1);};
  
  ;

Declarations : DECL DeclList ENDDECL ';' {}
| DECL ENDDECL {};

DeclList : DeclList Decl {}
| Decl {};

Decl : Type Varlist ';' {
  int declaration_type = $1;
  struct tnode* varList = $2;
  while(varList!=NULL){
    if(LookUp(varList->varname)==NULL){
      G_Install(varList->varname,declaration_type,1);
    }else{
      printf("ERROR: REDECLARATION OF VARIABLE: %s\n",varList->varname);
      exit(1);
    }
    varList=varList->right;
  }
  // print_GSymbolTable();
};

Type : INT {$$ = INTEGER_TYPE;} 
| STR {$$ = STRING_TYPE;}

Varlist : Varlist ',' ID {
  struct tnode* IDNode = createNode(-1,-1,NULL,$3->varname,-1,NULL,NULL);
  struct tnode* temp = $1;
  while (temp->right != NULL) {  
      temp = temp->right;
  }
  temp->right = IDNode;  
  $$ = $1; 
};
| ID {
    $$=createNode(-1,-1,NULL,$1->varname,-1,NULL,NULL);
  };

Slist : Slist Stmt {
  $$=createNode(-1,-1,NULL,NULL,CONNECTOR_NODE,$1,$2);
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
  | Identifier {$$=$1;}
  ;

Identifier : ID {
  struct tnode* IDNode = $1;
  if(LookUp(IDNode->varname)==NULL){
    printf("ERROR: UNDECLARED VARIABLE %s\n",IDNode->varname);
    exit(1);
  } 
  $$=IDNode;
};

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