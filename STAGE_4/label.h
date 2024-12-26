// #include <stdio.h>
// #include <stdlib.h>
typedef struct label_address_table{
    char* label;
    int address;
    struct label_address_table* next;
    struct label_address_table* last;
}label_address_table;
extern int first_pass;
struct label_address_table* insert_label(label_address_table* l,char* label,int address);
int search_label_address_table(label_address_table* l ,char* label);
void print_label_address_table(label_address_table* l);