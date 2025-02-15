%{
    #include <stdio.h>
%}

singleLineComment (\/\/)[^\n]*
multilineComment (\/\*)([^*]*(\*)*([^*/])*)(\*\/)
/*hello***/hello*/


%option noyywrap

%%
{singleLineComment} {
    printf("comment:%s\n",yytext);
}
{multilineComment} {
    printf("Multi-line comment: %s\n", yytext);
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
