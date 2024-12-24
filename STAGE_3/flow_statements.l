%{
 #include <stdlib.h>
 #include <stdio.h>
 #include "y.tab.h"
 #include "flow_statements.h"

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
"if" {return IF;}
"then" {return THEN;}
"else" {return ELSE;}
"endif" {return ENDIF;}
"while" {return WHILE;}
"do" {return DO;}
"endwhile" {return ENDWHILE;}
"break" {return BREAK;}
"continue" {return CONTINUE;}
"<" {return LT;}
">" {return GT;}
"<=" {return LTE;}
">=" {return GTE;}
"==" {return EQUALS;}
"!=" {return NOTEQUALS;}
"&&" {return AND;}
"||" {return OR;}
"+" {return PLUS;}
"-" {return MINUS;}
"*" {return MUL;}
"/" {return DIV;}
"=" {return *yytext;}
";" {return *yytext;}
[ \t] {}
[()] {return *yytext;}
[\n] {}
. {printf("%s ",yytext); yyerror("unknown character\n");exit(1);}

%%

int yywrap(void) {
 return 1;
}