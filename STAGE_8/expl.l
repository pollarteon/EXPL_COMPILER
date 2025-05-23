%{
 #include <stdlib.h>
 #include <stdio.h>
 #include "y.tab.h"
 #include "expl.h"
 void yyerror(const char* s);
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
"return" {return RETURN;}
"breakpoint" {return BREAKPOINT;}
"type" {return TYPE;}
"endtype" {return ENDTYPE;}
"null" {
        yylval.no = createNode(-1,-1,-1,TLookup("null"),NULL,NULL,NULL_NODE,NULL,NULL);
        return PNULL;
    }
"initialize" {return INITIALIZE;}
"alloc" {return ALLOC;}
"free" {return FREE;}
"class" {return CLASS;}
"endclass" {return ENDCLASS;}
"new" {return NEW;}
"delete" {return DELETE;}
"self" {return SELF;}
"extends" {return EXTENDS;}
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
"." {return *yytext;}
["][a-zA-Z0-9 .]*["] {
    // printf("%s\n",yytext);
    yylval.no = createNode(-1,1,-1,TLookup("str"),NULL,yytext,CONST_NODE,NULL,NULL);
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