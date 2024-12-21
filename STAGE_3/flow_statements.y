%{
 #include <stdlib.h>
 #include <stdio.h>
 #include <string.h>
 #include "flow_statements.h"
 #include "flow_statements.c"
 #include "code_gen.h"
 #include "code_gen.c"
 int yylex(void);
 extern FILE* yyin;
%}

%union{
 struct tnode *no;

}
%type <no> expr NUM program END ID Slist Stmt InputStmt OutputStmt AsgStmt WhileStmt Ifstmt
%token NUM PLUS MINUS MUL DIV END PBEGIN READ WRITE ID IF ELSE THEN ENDIF ENDWHILE WHILE OR AND LT GT LTE GTE EQUALS NOTEQUALS DO
%left PLUS MINUS
%left MUL DIV

%%

program : PBEGIN Slist END ';'{
    $$ = $2;
    FILE* target_file = fopen("code.xsm","w");
    fprintf(target_file, "%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n",0,2056,0,0,0,0,0,0); 
    fprintf(target_file,"MOV SP,4121\n"); //first 26 locations are reserved for a-z variables
    printf("Preorder of Syntax Tree : ");
    preorder($2);
    printf("\n\n");
    int result_reg =code_gen($2,target_file);
    // store_stack(result_reg,target_file);
    exit(1);
   }
  | PBEGIN END ';' {printf("Program finished");exit(1);};
  ;

Slist : Slist Stmt {$$=createTree(-1,CONNECTOR_NODE,NULL,$1,$2);}
| Stmt {$$=$1;};
;

Stmt : InputStmt {$$=$1;} 
| OutputStmt {$$=$1;}
|AsgStmt {$$=$1;}
|Ifstmt {$$=$1;}
|WhileStmt {$$=$1;}
;

InputStmt : READ '(' ID ')' ';' {$$ = makeNonLeafNode($3,NULL,READ_NODE,"_");};

OutputStmt : WRITE '(' expr ')' ';' {$$ = makeNonLeafNode($3,NULL,WRITE_NODE,"_");};

AsgStmt : ID '=' expr ';' {$$ = makeNonLeafNode($1,$3,OPERATOR_NODE,"=");};

Ifstmt : IF '(' expr ')' THEN Slist ELSE Slist ENDIF ';' {
  struct tnode* statements_node = makeNonLeafNode($6,$8,ELSE_NODE,"_");
  $$ = makeNonLeafNode($3,statements_node,IF_NODE,"_");
}
| IF '(' expr ')' THEN Slist ENDIF ';' {$$ = makeNonLeafNode($3,$6,IF_NODE,"_");}
;

WhileStmt : WHILE '(' expr ')' DO Slist ENDWHILE ';' {$$ = makeNonLeafNode($3,$6,WHILE_NODE,"_");}

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
  | '(' expr ')'  {$$ = $2;}
  | NUM   {$$ = $1;}
  | ID {$$ = $1;}
  ;

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