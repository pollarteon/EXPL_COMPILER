int register_num;
int getReg();
void freeReg();
int code_gen(struct tnode* t,FILE* target_file);
void store_stack(int value,FILE* target_file);