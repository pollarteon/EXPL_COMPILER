%{
    #include <stdio.h>
    int lines=1,words=0,characters=0;
%}




%%
  
[a-z|A-Z|0-9]*   {
    characters+=yyleng;
    words++;
}
\n          {
    lines++;
} 
%%


int yywrap(){
    printf("\nwords:%d\ncharacters:%d\nlines:%d\n\n",words,characters,lines);
    return 1;
}

int main(int argc,char* argv[]) {

    if(argc>1){
        FILE* fp = fopen(argv[1],"r");
        if(fp){
            yyin = fp;
        }
    }
    yylex();  // Call lexical analyzer
    return 0;
}
