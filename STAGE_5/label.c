// #include "label.h"

label_address_table* label_table = NULL; 

label_address_table* insert_label(label_address_table* l,char* label,int address){
    
   if (l == NULL) {
        label_address_table* new_entry = (label_address_table*)malloc(sizeof(label_address_table));
        new_entry->address = address;
        new_entry->label = strdup(label);
        new_entry->next = NULL;
        return new_entry;
    }
    label_address_table* temp = l;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    label_address_table* new_entry = (label_address_table*)malloc(sizeof(label_address_table));
    new_entry->address = address;
    new_entry->label = strdup(label); 
    new_entry->next = NULL;
    temp->next = new_entry;
    return l;
}

void print_label_address_table(label_address_table* l)
{
    if(l==NULL) return;
    label_address_table* temp = l;
    while(temp!=NULL){
        // printf("%s:%d\n",temp->label,temp->address);
        temp=temp->next;
    }
    printf("\n");
    return;
}

int search_label_address_table(label_address_table* l,char* label){
    // printf("Searching :%s\n",label);
    if(l==NULL) return -1;
    label_address_table* temp = l;
    while(temp!=NULL && strcmp(temp->label,label)!=0){
        // printf("%s \n\n\n",temp->label);
        temp=temp->next;
    }
    if(temp==NULL) return -1;
    return temp->address;
}

