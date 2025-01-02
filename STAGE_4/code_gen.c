// #include <stdio.h>
// #include <string.h>

int register_num = -1;
int label_num =-1;


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
        printf("Error: No need of Freeing\n");
    }
}
int getLabel(){
    label_num++;
    return label_num;
}

// for break and continue Label Tracking ................

LabelStack* label_stack = NULL;

LabelStack* push_LabelStack(LabelStack* s,int break_label,int continue_label){
    if(s==NULL){
        LabelStack* new_entry = (LabelStack*)malloc(sizeof(LabelStack));
        new_entry->break_label=break_label;
        new_entry->continue_label=continue_label;
        new_entry->next=NULL;
        new_entry->top=new_entry;
        return new_entry;
    }
    while(s->next!=NULL){
        s=s->next;
    }
    LabelStack* new_entry = (LabelStack*)malloc(sizeof(LabelStack));
    new_entry->break_label=break_label;
    new_entry->continue_label=continue_label;
    new_entry->next=NULL;
    s->next=new_entry;
    s->top=new_entry;
    return s;
}

LabelStack* pop_LabelStack(LabelStack* s){
    if(s==NULL)return NULL;
    if(s->next==NULL)return NULL;
    LabelStack* temp =s;
    while(temp->next->next!=NULL){
        temp=temp->next;
    }
    temp->next=NULL;
    s->top =temp;
    return s;
}

//.........................................................

//various keyword code -gen functions
int array_code_gen(struct tnode* t,FILE* target_file){
    struct Gsymbol* Gentry = t->left->Gentry;
    if(t->right->nodetype!=_2D_ARRAY_NODE){
        int index_reg;
        int reg_result = getReg();
        index_reg = code_gen(t->right,target_file);
        // printf("%d\n",index_reg);
        
        int storage_location = Gentry->binding;
        fprintf(target_file,"MOV R%d, %d\n",reg_result,storage_location);
        fprintf(target_file,"ADD R%d, R%d\n",reg_result,index_reg);
        fprintf(target_file,"MOV R%d, [R%d]\n",reg_result,reg_result);
        freeReg(); //for freeing index_reg;
        return reg_result;
    }else{
        int reg_result = getReg();
        int row_index_reg = code_gen(t->right->left,target_file);
        int col_index_reg = code_gen(t->right->right,target_file);
        // printf("%d\n",row_index_reg);
        // printf("%d\n",col_index_reg);
        int storage_location = Gentry->binding;
        int col = Gentry->col;
        fprintf(target_file,"MOV R%d, %d\n",reg_result,storage_location);
        fprintf(target_file,"MUL R%d ,%d\n",row_index_reg,col);
        fprintf(target_file,"ADD R%d ,R%d\n",reg_result,row_index_reg);
        fprintf(target_file,"ADD R%d, R%d\n",reg_result,col_index_reg);
        fprintf(target_file,"MOV R%d, [R%d]\n",reg_result,reg_result);
        freeReg(); //for freeing row_index_reg and col_index_reg
        freeReg();
        return reg_result;
    }
    
}


void read_code_gen(struct tnode *t, FILE *target_file)
{
    int reg_result = getReg();
    int reg_num = getReg();
    int storage_location;
    struct tnode *identifier_node = t->left;
    if(identifier_node->nodetype==ARRAY_NODE){
        struct Gsymbol* Gentry = identifier_node->left->Gentry;
        int storage_location = Gentry->binding;
        if(identifier_node->right->nodetype==_2D_ARRAY_NODE){
            int row_index_reg = code_gen(identifier_node->right->left,target_file);
            int col_index_reg = code_gen(identifier_node->right->right,target_file);
            int col = Gentry->col;
            fprintf(target_file,"MOV R%d, %d\n",reg_result,storage_location);
            fprintf(target_file,"MUL R%d, %d\n",row_index_reg,col);
            fprintf(target_file,"ADD R%d ,R%d\n",reg_result,row_index_reg);
            fprintf(target_file,"ADD R%d, R%d\n",reg_result,col_index_reg);
            freeReg();
            freeReg();
        }else{
            int index_reg;
        index_reg = code_gen(identifier_node->right,target_file);
        
        
        
        fprintf(target_file,"MOV R%d, %d\n",reg_result,storage_location);
        fprintf(target_file,"ADD R%d, R%d\n",reg_result,index_reg);
        freeReg();
        }
        
    }
    else{
        storage_location = identifier_node->Gentry->binding;
        fprintf(target_file,"MOV R%d, %d\n",reg_result,storage_location);
    } 
    // printf("%d\n",storageLocation);
    // calling read through library
    fprintf(target_file, "MOV R%d, \"Read\"\n", reg_num);
    fprintf(target_file, "PUSH R%d\n", reg_num); // function code
    fprintf(target_file, "MOV R%d, -2\n", reg_num);
    fprintf(target_file, "PUSH R%d\n", reg_num); // file descriptor
    fprintf(target_file, "MOV R%d, R%d\n", reg_num, reg_result);
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
    freeReg();
    freeReg();
    return;
}

void if_code_gen(struct tnode* t,FILE* target_file){
    int label1 = getLabel();
    
    //generating code for guard expression....
    int gaurd_reg = code_gen(t->left,target_file);
    fprintf(target_file,"JZ R%d, L%d\n",gaurd_reg,label1);
    freeReg();
    if(t->right->nodetype==ELSE_NODE){
        int label2 = getLabel();
        code_gen(t->right->left,target_file);
        fprintf(target_file,"JMP L%d\n",label2);
        fprintf(target_file,"L%d:\n",label1);
        code_gen(t->right->right,target_file);
        fprintf(target_file,"L%d:\n",label2);
    }else{
        code_gen(t->right,target_file);
        fprintf(target_file,"L%d:\n",label1);
    }
    return;
}

void while_code_gen(struct tnode* t,FILE* target_file){
    int loop_label = getLabel();
    int exit_label = getLabel();
    label_stack =  push_LabelStack(label_stack,exit_label,loop_label);
    fprintf(target_file,"L%d:\n",loop_label);
    int guard_reg = code_gen(t->left,target_file);    
    fprintf(target_file,"JZ R%d, L%d\n",guard_reg,exit_label);
    freeReg();
    code_gen(t->right,target_file);
    fprintf(target_file,"JMP L%d\n",loop_label);
    fprintf(target_file,"L%d:\n",exit_label);
    pop_LabelStack(label_stack);
    return;
}

void do_while_code_gen(struct tnode* t,FILE* target_file){
    int loop_label = getLabel();
    int exit_label = getLabel();
    label_stack = push_LabelStack(label_stack,exit_label,loop_label);
    fprintf(target_file,"L%d:\n",loop_label);
    code_gen(t->right,target_file);
    int guard_reg = code_gen(t->left,target_file);
    fprintf(target_file,"JZ R%d, L%d\n",guard_reg,exit_label);
    freeReg();
    fprintf(target_file,"JMP L%d\n",loop_label);
    fprintf(target_file,"L%d:\n",exit_label);
    pop_LabelStack(label_stack);
    return;
}

int address_of_code_gen(struct tnode* t, FILE* target_file){
    struct tnode* identifier_node = t->left;
    if(identifier_node->nodetype==ARRAY_NODE){
        if(identifier_node->nodetype!=_2D_ARRAY_NODE){
        int index_reg;
        int reg_result = getReg();
        index_reg = code_gen(identifier_node->right,target_file);
        int storage_location = identifier_node->left->Gentry->binding;
        fprintf(target_file,"MOV R%d, %d\n",reg_result,storage_location);
        fprintf(target_file,"ADD R%d, R%d\n",reg_result,index_reg);
        freeReg(); //for freeing index_reg;
        return reg_result;
    }else{
        int reg_result = getReg();
        int row_index_reg = code_gen(identifier_node->right->left,target_file);
        int col_index_reg = code_gen(identifier_node->right->right,target_file);
        // printf("%d\n",row_index_reg);
        // printf("%d\n",col_index_reg);
        int storage_location =identifier_node->left->Gentry->binding;
        int col = identifier_node->left->Gentry->col;
        fprintf(target_file,"MOV R%d, %d\n",reg_result,storage_location);
        fprintf(target_file,"MUL R%d ,%d\n",row_index_reg,col);
        fprintf(target_file,"ADD R%d ,R%d\n",reg_result,row_index_reg);
        fprintf(target_file,"ADD R%d, R%d\n",reg_result,col_index_reg);
        freeReg(); //for freeing row_index_reg and col_index_reg
        freeReg();
        return reg_result;
    }
    }
    
    int storage_location = t->left->Gentry->binding;
    int reg_result = getReg();
    // printf("location : %d\n",storage_location);
    fprintf(target_file,"MOV R%d, %d\n",reg_result,storage_location);
    return reg_result;
}

int dereference_code_gen(struct tnode* t , FILE* target_file){
    int reg_result = getReg();
    int address_reg = code_gen(t->left,target_file);   
    fprintf(target_file,"MOV R%d, [R%d]\n",reg_result,address_reg);
    freeReg();
    return reg_result;
}


//----------------------------------------------------------------------------

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
        if(t->type==INTEGER_TYPE)
        fprintf(target_file, "MOV R%d, %d\n", reg_num, t->val);
        else
        fprintf(target_file,"MOV R%d, %s\n",reg_num,t->varname);
        return reg_num;
    }
    else if(t->nodetype==IDENTIFIER_NODE){
        int reg_num  = getReg();
        int storage_location = t->Gentry->binding;
        // printf("%d\n\n",storage_location);
        fprintf(target_file,"MOV R%d, [%d]\n",reg_num,storage_location);
        return reg_num;
    }
    else if(t->nodetype==IF_NODE){
        if_code_gen(t,target_file);
        return -1;
    }
    else if(t->nodetype==WHILE_NODE){
        while_code_gen(t,target_file);
        return -1;
    }
    else if(t->nodetype==DO_WHILE_NODE){
        do_while_code_gen(t,target_file);
        return -1;
    }
    else if(t->nodetype==BREAK_NODE){
        fprintf(target_file,"JMP L%d\n",label_stack->top->break_label);
        return -1;
    }
    else if(t->nodetype==CONTINUE_NODE){
        fprintf(target_file,"JMP L%d\n",label_stack->top->continue_label);
        return -1;
    }
    else if(t->nodetype==ARRAY_NODE){
        int array_reg = array_code_gen(t,target_file);
        return array_reg;
    }
    else if(t->nodetype==DEREFERENCE_NODE){
        int reg = dereference_code_gen(t,target_file);
        return reg;
    }
    else if(t->nodetype==ADDRESS_NODE){
        int reg = address_of_code_gen(t,target_file);
        return reg;
    }
    else if (t->nodetype == OPERATOR_NODE)
    { 
       //if node is assignment operator
       if(strcmp(t->op,"=")==0){
            int reg2 = code_gen(t->right,target_file);
            if(t->left->nodetype==ARRAY_NODE){
                int index_reg;
                index_reg = code_gen(t->left->right,target_file);
                struct Gsymbol* Gentry = (t->left->left->Gentry);
                int storage_location = Gentry->binding;
                int reg_result = getReg();
                fprintf(target_file,"MOV R%d, %d\n",reg_result,storage_location);
                fprintf(target_file,"ADD R%d, R%d\n",reg_result,index_reg);
                fprintf(target_file,"MOV [R%d],R%d\n",reg_result,reg2);
                freeReg();
                freeReg();
                freeReg();
                return -1;
            } 
            if(t->left->nodetype==DEREFERENCE_NODE){
                int location_reg = code_gen(t->left->left,target_file);
                fprintf(target_file,"MOV [R%d], R%d\n",location_reg,reg2);
                freeReg();
                freeReg();
                return -1;

            }
            int storage_location = t->left->Gentry->binding;
            // printf("%d\n",storage_location);
            fprintf(target_file,"MOV [%d], R%d\n",storage_location,reg2);
            freeReg();
            return -1;
       }    
        // node is a arithmetic operator node or logical operator node

        int reg1 = code_gen(t->left, target_file);
        int reg2 = code_gen(t->right, target_file);
        if(strcmp(t->op,"+")==0) fprintf(target_file,"ADD R%d, R%d\n",reg1,reg2);
        else if (strcmp(t->op,"-")==0) fprintf(target_file,"SUB R%d, R%d\n",reg1,reg2);
        else if (strcmp(t->op,"*")==0) fprintf(target_file,"MUL R%d, R%d\n",reg1,reg2);
        else if (strcmp(t->op,"/")==0) fprintf(target_file,"DIV R%d, R%d\n",reg1,reg2);
        else if (strcmp(t->op,"%")==0) fprintf(target_file,"MOD R%d, R%d\n",reg1,reg2);
        else if (strcmp(t->op,"<")==0) fprintf(target_file,"LT R%d, R%d\n",reg1,reg2);
        else if (strcmp(t->op,"<=")==0) fprintf(target_file,"LE R%d, R%d\n",reg1,reg2);
        else if (strcmp(t->op,">")==0) fprintf(target_file,"GT R%d, R%d\n",reg1,reg2);
        else if (strcmp(t->op,">=")==0) fprintf(target_file,"GE R%d, R%d\n",reg1,reg2);
        else if (strcmp(t->op,"==")==0) fprintf(target_file,"EQ R%d, R%d\n",reg1,reg2);
        else if (strcmp(t->op,"!=")==0) fprintf(target_file,"NE R%d, R%d\n",reg1,reg2);
        else if (strcmp(t->op,"&&")==0) fprintf(target_file,"AND R%d, R%d\n",reg1,reg2);// check later
        else if (strcmp(t->op,"||")==0) fprintf(target_file,"OR R%d, R%d\n",reg1,reg2);//check later
        freeReg();
        // printf("%d\n",reg1);
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