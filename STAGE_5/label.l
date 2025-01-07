/*** Definition section ***/
%option noyywrap
%{
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include "label.h"
    #include "label.c"
    int instruction_number =1;
    int first_pass =1;
    FILE* first_pass_target;
    FILE* second_pass_target;
%}

%%

[L][0-9]+[:][\n] {
        if(first_pass){
            char *colon_pos = strchr(yytext, ':');
            if (colon_pos) {
                *colon_pos = '\0'; 
            }
            char* label = yytext;
            int address = 2056+2*(instruction_number-1);
            // printf("%s\n",label);
            label_table = insert_label(label_table,label,address);
            // print_label_address_table(label_table);
        }       
    }
[L][0-9]+ {
    if(first_pass){fprintf(first_pass_target,"%s",yytext);}
    else{
        // print_label_address_table(label_table);
        int address = search_label_address_table(label_table,yytext);
        fprintf(second_pass_target,"%d",address);
        
    }
}
^[A-Z]+ {
    if(first_pass){
        fprintf(first_pass_target,"%s",yytext); instruction_number++;
    }
    else
    fprintf(second_pass_target,"%s",yytext);
    // printf("%d\n",first_pass);
    }
[\n] {
    if(first_pass)
    fprintf(first_pass_target,"%s",yytext);
    else
    fprintf(second_pass_target,"%s",yytext);
    }
. {
    if(first_pass)
    fprintf(first_pass_target,"%s",yytext);
    else
    fprintf(second_pass_target,"%s",yytext);
}
%%

/*** C Code section ***/
int main(void)
{
    //first pass (creating label_address_table)
    FILE* input_file = fopen("code.xsm","r");
    yyin = input_file;
    first_pass_target = fopen("first_pass.xsm","w");
    yylex();
    fclose(first_pass_target);
    fclose(input_file);
    
    //the second pass (search and replace);
    input_file = fopen("first_pass.xsm","r");
    second_pass_target = fopen("target.xsm","w");
    yyin = input_file;
    first_pass =0;
    yylex();
    return 0;
}