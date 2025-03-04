#define HEAP_SIZE 1024
#define HEAP_ENTRIES 128
extern int register_num;
extern int label_num;
extern int begin_flag;
extern int heap_block_size;
extern int initialize_heap_flag;

// struct memstruct {
//     int freeBlockIndex;
//     int data;
//     int isFree; // 1 if free 0 if reserved
// }heap[HEAP_SIZE];

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
int dereference_code_gen(struct tnode* t , FILE* target_file);
void initialize_code_gen(struct tnode* t,FILE* target_file);
void alloc_code_gen(struct tnode* t ,FILE* target_file);
int field_code_gen(struct tnode* t,FILE* target_file,int expr);

void header_code_gen(FILE* target_file);
void function_begin_code_gen(FILE* target_file, struct Lsymbol* Ltable);
void function_end_code_gen(FILE* target_file,struct Lsymbol* Ltable);

// void push_arguements(FILE* target_file,struct Lsymbol* Ltable);

int evaluator(struct tnode* t);