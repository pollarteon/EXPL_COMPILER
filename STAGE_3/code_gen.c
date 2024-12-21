// #include <stdio.h>
// #include "exprtree.h"

register_num = -1;

int getReg()
{
    register_num++;
    if (register_num >= 20)
    {
        printf("Error:No more Registers Available");
        return -1;
    }
    return register_num;
}

void freeReg()
{
    if (register_num >= 0)
    {
        register_num--;
    }
    else
    {
        printf("Error: free a register Below 0\n");
    }
}

void read_code_gen(struct tnode *t, FILE *target_file)
{
    int reg_num = getReg();
    struct tnode *identifier_node = t->left;
    char variable = *(identifier_node->varname);
    int storageLocation = 4096 + (variable - 'a');

    // calling read through library
    fprintf(target_file, "MOV R%d, \"Read\"\n", reg_num);
    fprintf(target_file, "PUSH R%d\n", reg_num); // function code
    fprintf(target_file, "MOV R%d, -2\n", reg_num);
    fprintf(target_file, "PUSH R%d\n", reg_num); // file descriptor
    fprintf(target_file, "MOV R%d, %d\n", reg_num, storageLocation);
    fprintf(target_file, "PUSH R%d\n", reg_num); // stack location for storing var
    fprintf(target_file, "PUSH R1\n");           // blank arguement
    fprintf(target_file, "PUSH R1\n");           // for return addr
    fprintf(target_file, "CALL 0\n");            // calling library
    fprintf(target_file, "POP R0\n");           //pops After module call
    fprintf(target_file, "POP R1\n");
    fprintf(target_file, "POP R1\n");
    fprintf(target_file, "POP R1\n");
    fprintf(target_file, "POP R1\n");

    freeReg();
    return ;
}

void write_code_gen(struct tnode* t,FILE* target_file){
    int result_reg = code_gen(t,target_file);
    int reg_num = getReg();
    // calling write through library
    fprintf(target_file, "MOV R%d, \"Write\"\n", reg_num);
    fprintf(target_file, "PUSH R%d\n", reg_num); // function code
    fprintf(target_file, "MOV R%d, -2\n", reg_num);
    fprintf(target_file, "PUSH R%d\n", reg_num); // file descriptor
    fprintf(target_file, "MOV R%d, R%d\n", reg_num, result_reg);
    fprintf(target_file, "PUSH R%d\n", reg_num); // value to output
    fprintf(target_file, "PUSH R1\n");           // blank arguement
    fprintf(target_file, "PUSH R1\n");           // for return addr
    fprintf(target_file, "CALL 0\n");            // calling library
    fprintf(target_file, "POP R0\n");           //pops After module call
    fprintf(target_file, "POP R1\n");
    fprintf(target_file, "POP R1\n");
    fprintf(target_file, "POP R1\n");
    fprintf(target_file, "POP R1\n");

    return;
}


int code_gen(struct tnode *t, FILE *target_file)
{
    if (t == NULL)
        return -1;
    if (t->nodetype == READ_NODE)
    {
        read_code_gen(t, target_file);
        return -1;
    }
    else if (t->nodetype == WRITE_NODE)
    {
        write_code_gen(t->left,target_file);
        return -1;
    }
    else if(t->nodetype==CONST_NODE){
        int reg_num = getReg();
        fprintf(target_file, "MOV R%d, %d\n", reg_num, t->val);
        return reg_num;
    }
    else if(t->nodetype==IDENTIFIER_NODE){
        char identifer = *(t->varname);
        int reg_num  = getReg();
        int storage_location = 4096+(identifer-'a');
        fprintf(target_file,"MOV R%d, [%d]\n",reg_num,storage_location);
        return reg_num;
    }
    else if (t->nodetype == OPERATOR_NODE)
    { 
       //if node is assignment operator
       if(*(t->op)=='='){
            int reg2 = code_gen(t->right,target_file);
            char identifer = *(t->left->varname);
            int storage_location = 4096+(identifer-'a');
            fprintf(target_file,"MOV [%d], R%d\n",storage_location,reg2);
            freeReg();
            return -1;
       }
       
       
        // node is a arithmetic operator node

        int reg1 = code_gen(t->left, target_file);
        int reg2 = code_gen(t->right, target_file);
        switch (*(t->op))
        {
        case '+':
            fprintf(target_file, "ADD R%d, R%d\n", reg1, reg2);
            break;
        case '-':
            fprintf(target_file, "SUB R%d, R%d\n", reg1, reg2);
            break;
        case '*':
            fprintf(target_file, "MUL R%d, R%d\n", reg1, reg2);
            break;
        case '/':
            fprintf(target_file, "DIV R%d, R%d\n", reg1, reg2);
            break;
        default:
            break;
        }
        freeReg();
        return reg1;
    }else{
        int reg1 = code_gen(t->left,target_file);
        int reg2 = code_gen(t->right,target_file);
        return -1;
    }
    

    return -1;
}

// STAGE 1 EXERCISE 

// void store_stack(int reg_num, FILE *target_file)
// {
//     int reg1 = getReg();
//     fprintf(target_file, "MOV [4096], R%d\n", reg_num); // storing in  stack region [4096]
//     fprintf(target_file, "MOV SP, 4096\n");
//     fprintf(target_file, "MOV R%d, \"Write\"\n", reg1);
//     fprintf(target_file, "PUSH R%d\n", reg1);
//     fprintf(target_file, "MOV R%d, -2\n", reg1);
//     fprintf(target_file, "PUSH R%d\n", reg1);
//     fprintf(target_file, "PUSH R%d\n", reg_num);
//     fprintf(target_file, "PUSH R1\n");
//     fprintf(target_file, "PUSH R1\n");
//     fprintf(target_file, "CALL 0\n");
//     fprintf(target_file, "POP R0\n");
//     fprintf(target_file, "POP R1\n");
//     fprintf(target_file, "POP R1\n");
//     fprintf(target_file, "POP R1\n");
//     fprintf(target_file, "POP R1\n");
//     return;
// }