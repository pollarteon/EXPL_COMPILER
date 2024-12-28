%{
 #include <stdlib.h>
 #include <stdio.h>
 #include "y.tab.h"
 #include "expl.h"

 int number;
 char* variable;
%}

%%

[0-9]+ {number = atoi(yytext); yylval.no = makeNUMNode(number); return NUM;}
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
"decl" {return DECL;}
"enddecl" {return ENDDECL;}
"int" {return INT;}
"str" {return STR;}
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
"%" {return MOD;}
"=" {return *yytext;}
";" {return *yytext;}
"," {return *yytext;}
[a-zA-Z][a-zA-Z0-9_]* {// look later
    variable = yytext;
    yylval.no = makeIDNode(variable);
    Gsymbol* entry = LookUp(variable);
    if(entry!=NULL){
        // printf("Got the entry from Symbol Table for identifier %s\n",entry->name);
        (yylval.no)->Gentry = entry;
        // printf("%s\n",(yylval.no->Gentry->name));
    }
    return ID;
    }
[ \t] {}
[()] {return *yytext;}
[\[\]] {return *yytext;}
[\n] {}
. {printf("%s ",yytext); yyerror("unknown character\n");exit(1);}

%%

int yywrap(void) {
 return 1;
}