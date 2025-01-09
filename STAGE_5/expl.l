%{
 #include <stdlib.h>
 #include <stdio.h>
 #include "y.tab.h"
 #include "expl.h"

 int number;
 char* variable;
 int line_number =1;
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
"main" {return MAIN;}
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
"&" {return *yytext;}
"=" {return *yytext;}
";" {return *yytext;}
"," {return *yytext;}
"{" {return *yytext;}
"}" {return *yytext;}
["][a-zA-Z0-9_ ]*["] {
    // printf("%s\n",yytext);
    yylval.no = createNode(-1,1,-1,STRING_TYPE,NULL,yytext,CONST_NODE,NULL,NULL);
    return STRING;
}
[a-zA-Z][a-zA-Z0-9_]* {// look later
    variable = yytext;
    yylval.no = makeIDNode(variable);
    Gsymbol* Gentry = GLookUp(variable);
    if(Gentry!=NULL){
        // printf("Got the entry from Symbol Table for identifier %s\n",Gentry->name);
        (yylval.no)->Gentry = Gentry; //setting Gentry field in the node field
        // printf("%s\n",(yylval.no->Gentry->name));
    }
    Lsymbol* Lentry = LLookUp(variable);
    if(Lentry!=NULL){
        (yylval.no)->Lentry = Lentry; //setting Lentry Field in tnode
    }
    return ID;
    }
[ \t] {}
[()] {return *yytext;}
[\[\]] {return *yytext;}
[\n] { line_number++;}
. {printf("%s ",yytext); yyerror("unknown character\n");exit(1);}

%%

int yywrap(void) {
 return 1;
}