%{ 
    #include <stdio.h>    
%}

%union{
    char character ;
    int integer;
}

%token OP DIGIT NEWLINE

%%

start : expr NEWLINE {
    printf("\nSuccessful\n");
    exit(1);
};

expr : expr OP expr {printf("%c ",$<character>2);}
| '(' expr ')' {}
| DIGIT {printf("%c ",$<character>1);}

%%

void yyerror(char const *s)
{
    printf("yyerror  %s\n",s);
    return ;
}

int main(){
    yyparse();
    return 1;
}