%{
    #include <stdio.h>
%}

keyword A([a-z]|[A-Z]|[0-9])([a-z]|[A-Z]|[0-9])

%%
{keyword} {
    printf("%s\n",yytext);
}
.|\n {}
%%


int main(int argc,char* argv[]) {

    if(argc>1){
        FILE* fp = fopen(argv[1],"r");
        if(fp){
            yyin = fp;
        }
    }
    yylex();  
    return 0;
}
