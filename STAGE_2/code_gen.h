int register_num;
int stack_storage[];
int getReg();
void freeReg();
int code_gen(struct tnode* t,FILE* target_file);
void read_code_gen(struct tnode* t,FILE* target_file);
void write_code_gen(struct tnode* t, FILE* target_file);
void store_stack(int value,FILE* target_file);
int evaluator(struct tnode* t);