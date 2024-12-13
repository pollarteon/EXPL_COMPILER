%{
 #include <stdlib.h>
 #include <stdio.h>
 #include "y.tab.h"
 #include "exprtree.h"

 int number;
 char* variable;
%}

%%

[0-9]+ {number = atoi(yytext); yylval.no = makeNUMNode(number); return NUM;}
[a-z] {// look later
    variable = yytext;
    yylval.no = makeIDNode(variable);
    return ID;
    }
"begin" {return PBEGIN;}
"end" {return END;}
"read" {return READ;}
"write" {return WRITE;}
"+" {return PLUS;}
"-" {return MINUS;}
"*" {return MUL;}
"/" {return DIV;}
"=" {return *yytext;}
";" {return *yytext;}
[ \t] {}
[()] {return *yytext;}
[\n] {}
. {yyerror("unknown character\n");exit(1);}

%%

int yywrap(void) {
 return 1;
}