/*** Definition section ***/

%{
    #include <stdio.h>
    #include <stdlib.h>
    #include "y.tab.h"
%}

%%

[0-9a-zA-Z] {
    yylval.character = *yytext;
    return DIGIT;
};
[+-/*] {
    yylval.character = *yytext;
    return OP;
}
[\n] {
    return NEWLINE;
}
. {
    yyerror("syntax Error");
    exit(1);   
}

%%

/*** C Code section ***/

int yywrap(void){
    return 1;
}

