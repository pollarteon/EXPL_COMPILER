%{
    #include <stdio.h>
    int count =0;
%}


integer ([1-9]+[0-9]*)|0
float   (([1-9]+[0-9]*)|0)\.(([1-9]+[0-9]*)|0)

/*auxillary functions */
%%
{integer} {
    count++;
}
{float} {
    count++;
}

%%

int yywrap(){
    printf("\nNumber of integer and Floats:%d\n",count);
    return 1;
}

int main(int argc ,char* argv[]){
    if(argc>1){
        FILE* fp = fopen(argv[1],"r");
        if(fp) yyin = fp;
    }
    yylex();
    return 0;
}
