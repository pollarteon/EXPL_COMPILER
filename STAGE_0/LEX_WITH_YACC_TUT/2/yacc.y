%{
    #include <stdio.h>
    #include <stdlib.h>
    void yyerror(const char *s);
    int yyparse();
%}

%union {
    char* string;  // For IDENTIFIER (e.g., variables)
    char character; // For OP (operators)
}

%token <string> IDENTIFIER
%token <character> OP
%token NEWLINE

%%

start : expr NEWLINE {
    printf("\nSuccessful\n");
    printf("%s\n",$<string>1);
    exit(1);  
};

expr : expr OP expr {
    $<string>$ = (char*)malloc(strlen($<string>1) + strlen($<string>3) + 4); 
    sprintf($<string>$, "%c %s %s ", $<character>2, $<string>1, $<string>3);  
}
| '(' expr ')' {

}
| IDENTIFIER {
    $<string>$ = $<string>1;  
};

%%

void yyerror(const char *s) {
    fprintf(stderr, "Error: %s\n", s);
}

int main() {
    return yyparse();
}
