%{
 #include <stdlib.h>
 #include <stdio.h>
 #include "exprtree.h"
 #include "exprtree.c"
 #include "code_gen.h"
 #include "code_gen.c"
 int yylex(void);
%}

%union{
 struct tnode *no;

}
%type <no> expr NUM program END
%token NUM PLUS MINUS MUL DIV END
%left PLUS MINUS
%left MUL DIV

%%

program : expr END {
    $$ = $2;
    FILE* target_file = fopen("code.xsm","w");
    fprintf(target_file, "%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n",0,2056,0,0,0,0,0,0); 
    printf("Answer : %d\n",evaluate($1));
    preorder($1);
    printf("\n");
    postorder($1);
    printf("\n\n\n");
    int result_reg =code_gen($1,target_file);
    store_stack(result_reg,target_file);
    exit(1);
   }
  ;

expr : expr PLUS expr  {$$ = makeOperatorNode('+',$1,$3);}
  | expr MINUS expr   {$$ = makeOperatorNode('-',$1,$3);}
  | expr MUL expr {$$ = makeOperatorNode('*',$1,$3);}
  | expr DIV expr {$$ = makeOperatorNode('/',$1,$3);}
  | '(' expr ')'  {$$ = $2;}
  | NUM   {$$ = $1;}
  ;

%%

yyerror(char const *s)
{
    printf("yyerror %s",s);
}


int main(void) {
 yyparse();

 return 0;
}