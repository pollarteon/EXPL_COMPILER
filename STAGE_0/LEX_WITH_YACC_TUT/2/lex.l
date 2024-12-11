%{
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include "y.tab.h"
%}

%%

[0-9a-zA-Z]+ { 
    yylval.string = strdup(yytext); // Allocate memory for IDENTIFIER
    return IDENTIFIER; 
}
[+-/*] {
    yylval.character = *yytext;
    return OP;
}
[\(\)] { 
    return *yytext; 
}
[\n] { 
    return NEWLINE; 
}
[ \t]+ { /* Ignore whitespace */ }
. { 
    yyerror("syntax Error");
    exit(1);   
}

%%

int yywrap(void) {
    return 1;
}
