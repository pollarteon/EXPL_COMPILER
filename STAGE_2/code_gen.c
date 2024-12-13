#include <stdio.h>

register_num =-1;

int getReg(){
    register_num++;
    if(register_num>=20){
        printf("Error:No more Registers Available");
        return -1;
    }
    return register_num;
}

void freeReg(){
    if(register_num>=0){
          register_num--;
    }else{
        printf("Error: free a register Below 0\n");
    }
}

int code_gen(struct tnode* t,FILE* target_file){
    if(t==NULL) return -1;
    if(t->op==NULL){ //node is leaf
        int reg_num = getReg();
        fprintf(target_file,"MOV R%d, %d\n",reg_num,t->val);
        return reg_num;
    }
    //node is operator node
    int reg1 =code_gen(t->left,target_file);
    int reg2 =code_gen(t->right,target_file);
    switch (*(t->op))
    {
    case '+':
        fprintf(target_file,"ADD R%d, R%d\n",reg1,reg2);
        break;
    case '-':
        fprintf(target_file,"SUB R%d, R%d\n",reg1,reg2);
        break;
    case '*':
        fprintf(target_file,"MUL R%d, R%d\n",reg1,reg2);
        break;
    case '/':
        fprintf(target_file,"DIV R%d, R%d\n",reg1,reg2);
        break;
    default:
        break;
    }
    
    freeReg();
    return reg1;
    
}

void store_stack(int reg_num,FILE* target_file){
    int reg1= getReg();
    fprintf(target_file,"MOV [4096], R%d\n",reg_num);//storing in  stack region [4096]
    fprintf(target_file,"MOV SP, 4096\n");
    fprintf(target_file, "MOV R%d, \"Write\"\n",reg1);
    fprintf(target_file, "PUSH R%d\n",reg1);
    fprintf(target_file, "MOV R%d, -2\n",reg1);
    fprintf(target_file, "PUSH R%d\n",reg1);
    fprintf(target_file, "PUSH R%d\n", reg_num);
    fprintf(target_file, "PUSH R1\n");
    fprintf(target_file, "PUSH R1\n");
    fprintf(target_file, "CALL 0\n");
    fprintf(target_file, "POP R0\n");
    fprintf(target_file, "POP R1\n");
    fprintf(target_file, "POP R1\n");
    fprintf(target_file, "POP R1\n");
    fprintf(target_file, "POP R1\n");
    return;
}