extern int register_num;
extern int label_num;

typedef struct LabelStack{
    int break_label;
    int continue_label;
    struct LabelStack* next;
    struct LabelStack* top;
}LabelStack;
extern LabelStack* label_stack;
LabelStack* push_LabelStack(LabelStack* s,int break_label,int continue_label);
LabelStack* pop_LabelStack(LabelStack*s);

int getReg();
void freeReg();
int getLabel();

int code_gen(struct tnode* t,FILE* target_file);
void read_code_gen(struct tnode* t,FILE* target_file);
void write_code_gen(struct tnode* t, FILE* target_file);
void store_stack(int value,FILE* target_file);
void if_code_gen(struct tnode* t,FILE* target_file);
void while_code_gen(struct tnode* t,FILE* target_file);
void do_while_code_gen(struct tnode* t,FILE* target_file);
int array_code_gen(struct tnode* t,FILE* target_file);
int address_of_code_gen(struct tnode* t, FILE* target_file);
int dereference_node(struct tnode* t , FILE* target_file);

int evaluator(struct tnode* t);