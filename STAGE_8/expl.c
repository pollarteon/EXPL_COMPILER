// #include "expl.h"

int inside_class = 0;

int class_field_index=0;

struct tnode *createNode(int val, int row, int col, Typetable *type, char *c, char *varname, int nodeType, struct tnode *l, struct tnode *r)
{
	// printf("Hello\n");
	struct tnode *temp;
	temp = (struct tnode *)malloc(sizeof(struct tnode));
	temp->type = type;
	temp->Ctype = NULL;
	temp->op = c;
	temp->val = val;
	temp->left = l;
	temp->right = r;
	temp->middle = NULL;
	temp->size = row * col;
	temp->row = row;
	temp->col = col;
	temp->varname = varname ? strdup(varname) : NULL;
	temp->nodetype = nodeType;
	temp->Gentry = NULL;
	temp->Lentry = NULL;
	temp->argList = NULL;
	return temp;
}

struct tnode *makeNUMNode(int n)
{
	struct tnode *temp;
	temp = (struct tnode *)malloc(sizeof(struct tnode));
	temp->type = TLookup("int");
	temp->Ctype = NULL;
	temp->val = n; // useful for NUM Node
	temp->op = NULL;
	temp->nodetype = CONST_NODE;
	temp->varname = NULL;
	temp->left = NULL;
	temp->right = NULL;
	temp->middle = NULL;
	temp->Gentry = NULL;
	temp->Lentry = NULL;
	temp->argList = NULL;
	temp->size = 1;
	temp->row = 1;
	temp->col = 1;
	// printf("MADE NUM NODE: %d\n",temp->val);
	return temp;
}

struct tnode *makeIDNode(char *varName)
{
	struct tnode *temp;
	temp = (struct tnode *)malloc(sizeof(struct tnode));
	temp->type = NULL;
	temp->Ctype = NULL;
	temp->val = -1;
	temp->left = NULL;
	temp->right = NULL;
	temp->middle = NULL;
	temp->op = NULL;
	temp->val = -1;
	temp->nodetype = IDENTIFIER_NODE;
	temp->varname = strdup(varName); // useful for Identifier Node
	temp->Gentry = NULL;
	temp->Lentry = NULL;
	temp->argList = NULL;
	temp->size = 1;
	temp->row = 1;
	temp->col = 1;
	// printf("MADE ID NODE: %c\n",*(temp->varname));
	return temp;
}

struct tnode *makeNonLeafNode(struct tnode *l, struct tnode *r, int nodeType, char *op)
{
	struct tnode *temp;
	temp = (struct tnode *)malloc(sizeof(struct tnode));
	temp->val = -1;
	temp->nodetype = nodeType;
	temp->type = NULL;
	temp->varname = NULL;
	temp->op = NULL;
	temp->Ctype = NULL;
	temp->Gentry = NULL;
	temp->Lentry = NULL;
	temp->argList = NULL;
	temp->size = 1;
	temp->row = 1;
	temp->col = 1;
	if (temp->nodetype == OPERATOR_NODE)
	{
		int is_pointer = 0;
		temp->op = op;
		if ((l->Ctype != NULL) || r->Ctype != NULL)
		{
			printf("%s\n", temp->op);
			// printf("%s %s\n", l->type->name, r->type->name);
			printf("ERROR: classes not used in expression evaluation/ assignments\n");
			exit(1);
		}
		if (strcmp(op, "+") == 0 || strcmp(op, "-") == 0 || strcmp(op, "/") == 0 || strcmp(op, "*") == 0 || strcmp(op, "%") == 0)
		{

			// printf("%d %d\n",l->type,r->type);
			if (strcmp(l->type->name, "pointer(int)") == 0)
			{
				if (strcmp(r->type->name, "int") != 0)
				{
					printf("ERROR: TYPE MISMATCH\n");
					exit(1);
				}
				is_pointer = 1;
				temp->type = TLookup("pointer(int)");
			}
			else if (strcmp(l->type->name, "pointer(str)") == 0)
			{
				if (strcmp(r->type->name, "int") != 0)
				{
					printf("ERROR: TYPE MISMATCH\n");
					exit(1);
				}
				is_pointer = 1;
				temp->type = TLookup("pointer(str)");
			}
			else if (strcmp(r->type->name, "pointer(int)") == 0)
			{
				if (strcmp(l->type->name, "int") != 0)
				{
					printf("ERROR: TYPE MISMATCH\n");
					exit(1);
				}
				is_pointer = 1;
				temp->type = TLookup("pointer(int)");
			}
			else if (strcmp(r->type->name, "pointer(str)") == 0)
			{
				if (strcmp(l->type->name, "int") != 0)
				{
					printf("ERROR: TYPE MISMATCH\n");
					exit(1);
				}
				is_pointer = 1;
				temp->type = TLookup("pointer(str)");
			}
			else
			{
				temp->type = TLookup("int");
			}
			if (is_pointer && (strcmp(op, "/") == 0 || strcmp(op, "%") == 0 || strcmp(op, "*") == 0))
			{
				printf("ERROR: INVALID OPERATION IN POINTER ARITHMETIC\n");
				exit(1);
			}
			int l_flag = 0;
			int r_flag = 0;

			if (l->nodetype == IDENTIFIER_NODE)
			{
				struct Gsymbol *Gentry = l->Gentry;
				struct Lsymbol *Lentry = l->Lentry;

				if (Lentry != NULL)
				{ // Local variable
					if (strcmp(Lentry->type->name, "int") != 0 && strcmp(Lentry->type->name, "pointer(int)") != 0)
					{
						l_flag = 1;
					}
				}
				else if (Gentry != NULL)
				{ // Global variable
					if (strcmp(Gentry->type->name, "int") != 0 && strcmp(Gentry->type->name, "pointer(int)") != 0)
					{
						l_flag = 1;
					}
				}
			}

			if (r->nodetype == IDENTIFIER_NODE)
			{
				struct Gsymbol *Gentry = r->Gentry;
				struct Lsymbol *Lentry = r->Lentry;

				if (Lentry != NULL)
				{ // Local variable
					if (strcmp(Lentry->type->name, "int") != 0 && strcmp(Lentry->type->name, "pointer(int)") != 0)
					{
						r_flag = 1;
					}
				}
				else if (Gentry != NULL)
				{ // Global variable
					if (strcmp(Gentry->type->name, "int") != 0 && strcmp(Gentry->type->name, "pointer(int)") != 0)
					{
						r_flag = 1;
					}
				}
			}

			if (l_flag == 1 || r_flag == 1 || strcmp(l->type->name, "str") == 0 || strcmp(r->type->name, "str") == 0)
			{
				printf("%d %d \n", l_flag, r_flag);
				printf("\n\nERROR: NON-INTEGER TYPE IN ARITHMETIC OPERATION\n\n");
				exit(1);
			}
			if (!strcmp(l->type->name, "null") || !strcmp(r->type->name, "null"))
			{
				printf("ERROR:NULL type in artihmetic expression\n");
				exit(1);
			}
		}
		else if (strcmp(op, "=") != 0)
		{
			if (strcmp(op, "==") && strcmp(op, "!="))
				if (!strcmp(l->type->name, "null") || !strcmp(r->type->name, "null"))
				{
					printf("ERROR:NULL type in boolean expression\n");
					exit(1);
				}
			temp->type = TLookup("bool");
			temp->left = l;
			temp->right = r;
			temp->middle = NULL;
			return temp;
		}
		else // assignment operator
		{
			if (l->nodetype == ADDRESS_NODE)
			{
				printf("ERROR: & is an lval operator\n");
				exit(1);
			}

			if (strcmp(l->type->name, r->type->name)) // types are not matching
			{
				if (strcmp(r->type->name, "null") == 0)
				{
					if (strcmp(l->type->name, "int") == 0 || strcmp(l->type->name, "str") == 0)
					{
						printf("%s\n", temp->op);
						printf("%s %s\n", l->type->name, r->type->name);
						printf("TYPE ERROR:\n");
						exit(1);
					}
				}
				else
				{
					printf("%s\n", temp->op);
					printf("%s %s\n", l->type->name, r->type->name);
					printf("TYPE ERROR:\n");
					exit(1);
				}
				temp->left = l;
				temp->right = r;
				temp->middle = NULL;
				return temp;
			}
		}
		// printf("%s\n", temp->op);
		// printf("%d %d\n", l->type, r->type);
		if (strcmp(l->type->name, r->type->name) && ((strcmp(l->type->name, "str") == 0 || strcmp(r->type->name, "str"))))
		{
			printf("%s\n", temp->op);
			printf("%s %s\n", l->type->name, r->type->name);
			printf("TYPE ERROR:\n");
			exit(1);
		}
	}
	else if (temp->nodetype == INITIALIZE_NODE)
	{

		// checking if the identifer is int (the identifer is used to store return val of initialize()function)
		struct tnode *identifier_node = l;

		int symbol_table = check_identifier(identifier_node);
		if (symbol_table == 1)
		{ // identifier is in Global symbol table
			if (strcmp(l->Gentry->type->name, "int") != 0)
			{
				printf("ERROR: return type of initialize is int ;storing into a non-int variable ! %s \n", l->Gentry->name);
				exit(1);
			}
		}
		// setting type of initialize node as  int (may not be required)
		temp->type = TLookup("int");
	}
	else if (temp->nodetype == FREE_NODE)
	{
		struct tnode *identifer_node = l;
		if (identifer_node->nodetype != FIELD_NODE)
		{ // checking whether we are freeing a user-defined datatype variable
			struct Typetable *type = identifer_node->type;
			if (strcmp(type->name, "int") == 0 || strcmp(type->name, "str") == 0)
			{
				printf("Freeing a primitive Data-type variable\n");
				return NULL;
			}
		}
	}
	else if (temp->nodetype == IF_NODE || temp->nodetype == WHILE_NODE || temp->nodetype == DO_WHILE_NODE || temp->nodetype == IF_ELSE_NODE)
	{
		if (strcmp(l->type->name, "bool")) // if gaurd expression node is not an boolean type
		{
			printf("TYPE ERROR IN CONDITION : \n");
			exit(1);
		}
	}
	else if (temp->nodetype == ARRAY_NODE)
	{
		struct Gsymbol *Gentry = l->Gentry;
		if (Gentry == NULL)
		{
			printf("ERROR: ACCESSING AN ARRAY NOT DECLARED AS A GLOBAL VARIABLE: %s\n", l->varname);
			exit(1);
		}
		if (r->nodetype == CONST_NODE)
		{
			int index = r->val;
			if (index >= (Gentry->row))
			{
				printf("ERROR: INDEX OUT OF BOUNDS\n");
				exit(1);
			}
			temp->type = Gentry->type;
		}
		else if (r->nodetype == IDENTIFIER_NODE)
		{

			int symbol_table = check_identifier(r);
			if (symbol_table == 2) // local variable
				temp->type = r->Lentry->type;
			else // global variable
				temp->type = r->Gentry->type;
		}
		else if (r->nodetype == OPERATOR_NODE)
		{
			temp->type = r->type;
		}
		else if (r->nodetype == _2D_ARRAY_NODE)
		{
			struct tnode *_2D_node = r;

			if (_2D_node->left->nodetype == CONST_NODE)
			{
				int row_index = _2D_node->left->val;
				if (row_index >= (Gentry->row))
				{
					printf("ERROR: INDEX OUT OF BOUNDS\n");
					exit(1);
				}
			}
			else if (_2D_node->left->nodetype == ARRAY_NODE)
			{
				struct Gsymbol *index_Gentry = _2D_node->left->left->Gentry;
				temp->type = Gentry->type;
			}
			else if (_2D_node->left->nodetype == OPERATOR_NODE)
			{
				temp->type = _2D_node->left->type;
			}
			else
			{

				int symbol_table = check_identifier(_2D_node->left);
				if (symbol_table == 2)
					temp->type = _2D_node->left->Lentry->type;
				else
					temp->type = _2D_node->left->Gentry->type;
			}
			if (_2D_node->right->nodetype == CONST_NODE)
			{
				int row_index = _2D_node->right->val;
				if (row_index >= (Gentry->col))
				{
					printf("ERROR: INDEX OUT OF BOUNDS\n");
					exit(1);
				}
			}
			else if (_2D_node->right->nodetype == ARRAY_NODE)
			{
				struct Gsymbol *index_Gentry = _2D_node->right->left->Gentry;
				temp->type = Gentry->type;
			}
			else if (_2D_node->right->nodetype == OPERATOR_NODE)
			{
				temp->type = _2D_node->right->type;
			}
			else
			{
				struct Lsymbol *index_Lentry = _2D_node->right->Lentry;
				struct Gsymbol *index_Gentry = _2D_node->right->Gentry;
				if (index_Lentry)
					temp->type = index_Lentry->type;
				else
					temp->type = index_Gentry->type;
			}
			temp->type = Gentry->type;
		}
	}
	temp->left = l;
	temp->right = r;
	temp->middle = NULL;
	return temp;
}
//----------TYPE TABLE FUNCTIONS --------------------------

struct Typetable *Type_table = NULL;

void TypeTableCreate()
{
	Type_table = Tinstall("int", 1, NULL);
	Type_table = Tinstall("str", 1, NULL);
	Type_table = Tinstall("bool", 1, NULL);
	Type_table = Tinstall("null", 0, NULL);
	Type_table = Tinstall("void", 0, NULL);
	Type_table = Tinstall("pointer", 0, NULL);
	Type_table = Tinstall("pointer(int)", 0, NULL);
	Type_table = Tinstall("pointer(str)", 0, NULL);
}

struct Typetable *Tinstall(char *name, int size, struct Fieldlist *fields)
{
	Typetable *entry = (Typetable *)malloc(sizeof(Typetable));
	entry->name = strdup(name);
	entry->size = size;
	entry->fields = fields;
	entry->next = NULL;
	if (Type_table == NULL)
	{
		return entry;
	}
	Typetable *temp = Type_table;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = entry;
	return Type_table;
}

struct Typetable *TLookup(char *name)
{
	struct Typetable *temp = Type_table;
	if (Type_table == NULL)
		return NULL;
	while (temp != NULL && strcmp(name, temp->name) != 0)
		temp = temp->next;
	return temp;
}

struct Fieldlist *FLookup(struct Typetable *type, char *name)
{
	if (type == NULL)
		return NULL;
	struct Fieldlist *temp = type->fields;
	while (temp != NULL && strcmp(temp->name, name) != 0)
	{
		temp = temp->next;
	}
	return temp;
}

struct Fieldlist *Finstall(struct Fieldlist *fields, struct Fieldlist *field)
{

	struct Fieldlist *temp = fields;
	if (temp == NULL)
		return field;
	// Traverse the existing field list to check for duplicate names
	while (temp != NULL && temp->next != NULL)
	{
		if (strcmp(temp->name, field->name) == 0)
		{
			printf("ERROR: Duplicate field name '%s' in user-defined type/class\n", field->name);
			exit(1); // or return NULL, depending on how you want to handle it
		}
		temp = temp->next;
	}
	if (strcmp(temp->name, field->name) == 0)
	{
		printf("ERROR: Duplicate field name '%s' in user-defined type/class\n", field->name);
		exit(1); // or return NULL, depending on how you want to handle it
	}
	// Add the new field to the list
	temp->next = field;
	return fields;
}

struct Fieldlist *Fcreate(char *name, int fieldIndex, struct Typetable *type, struct Classtable *ctype)
{
	struct Fieldlist *field = (Fieldlist *)malloc(sizeof(Fieldlist));
	field->name = strdup(name);
	field->fieldIndex = fieldIndex;
	field->type = type;
	field->ctype = ctype;
	field->next = NULL;
	return field;
}

void PrintTypeTable()
{
	Typetable *temp = Type_table;
	printf("---------------------TYPE_TABLE--------------------\n");
	while (temp != NULL)
	{
		printf("|--%s(%d)--|", temp->name, temp->size);
		temp = temp->next;
	}
	printf("\n\n");
	return;
}

void PrintFieldlist(struct Fieldlist *fieldlist)
{
	struct Fieldlist *temp = fieldlist;
	printf("\n--------------------Field---------------------\n");
	while (temp != NULL)
	{
		printf("|---%s(%d)%s---|", temp->name, temp->fieldIndex, temp->type ? temp->type->name : temp->ctype->name);
		temp = temp->next;
	}
	printf("\n\n");
	return;
}

int GetSize(struct Typetable *type)
{
	if (type == NULL)
	{
		printf("Getting size of null type !!\n");
		return 0;
	}
	return type->size;
}
//----------CLASS TABLE FUNCTIONS --------------------------

struct Classtable *class_table = NULL;
int class_index = 0;
int member_function_pos = 0;
struct Classtable *cptr = NULL;

struct Classtable *CInstall(char *name, char *parent_class_name)
{
	Classtable *entry = (Classtable *)malloc(sizeof(Classtable));
	entry->name = strdup(name);
	entry->memberField = NULL;
	entry->Vfuncptr = NULL;
	entry->class_index = class_index++;
	entry->field_count = -1;	// field count not set initially
	entry->method_count = -1; // member count not set initially
	entry->next = NULL;

	Classtable *temp = class_table;
	// Print_Classtable();
	if (temp == NULL)
	{
		class_table = entry;
		return entry;
	}
	while (temp != NULL)
	{
		// printf("%s %s\n",temp->name,name);
		if (strcmp(temp->name, name) == 0)
		{
			printf("ERROR: duplicate classes found:%s %s\n", name, temp->name);
			exit(1);
		}
		if (temp->next == NULL)
			break;
		temp = temp->next;
	}
	temp->next = entry;

	return entry;
}

void Class_Minstall(struct Classtable *cptr, char *name, struct Typetable *type, struct ParamList *Paramlist)
{
	Memberfunclist *temp = cptr->Vfuncptr;
	Memberfunclist *member_entry = (Memberfunclist *)malloc(sizeof(Memberfunclist));
	member_entry->name = strdup(name);
	member_entry->type = type;
	member_entry->paramlist = Paramlist;
	member_entry->Funcposition = member_function_pos++;
	member_entry->Flabel = flabel++;
	member_entry->next = NULL;
	if (temp == NULL)
	{
		cptr->Vfuncptr = member_entry;
		return;
	}
	while (temp != NULL)
	{
		if (strcmp(temp->name, name) == 0)
		{
			printf("ERROR:member functions cannot have the same name!!%s\n", temp->name);
			exit(1);
		}
		if (temp->next == NULL)
			break;
		temp = temp->next;
	}
	temp->next = member_entry;
	return;
}

void Class_Finstall(struct Classtable *cptr, struct Fieldlist *field)
{
	struct Fieldlist *temp = cptr->memberField;
	if (temp == NULL)
	{
		cptr->memberField = field;
		return;
	}
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = field;
	return;
}

Classtable *Clookup(char *name)
{
	Classtable *temp = class_table;
	if (temp == NULL)
		return NULL;
	while (temp != NULL)
	{
		if (strcmp(temp->name, name) == 0)
			break;
		temp = temp->next;
	}
	return temp;
}

struct Memberfunclist *Class_Mlookup(Classtable *Ctype, char *name)
{
	if (Ctype == NULL)
		return NULL;
	struct Memberfunclist *temp = Ctype->Vfuncptr;
	if (temp == NULL)
		return NULL;
	while (temp != NULL)
	{
		if (strcmp(temp->name, name) == 0)
			break;
		temp = temp->next;
	}
	return temp;
}

Fieldlist *Class_Flookup(Classtable *CType, char *name)
{
	Fieldlist *temp = CType->memberField;
	while (temp != NULL)
	{
		if (strcmp(temp->name, name) == 0)
			break;
		temp = temp->next;
	}
	return temp;
}

void Print_Classtable()
{
	Classtable *temp = class_table;
	printf("\n--------------------CLASS TABLE---------------------\n");
	while (temp != NULL)
	{
		printf("|---%s(%d)---|", temp->name, temp->class_index);
		temp = temp->next;
	}
	printf("\n\n");
	return;
}

void Print_VirtFuncTable(struct Classtable *class)
{
	struct Memberfunclist *temp = class->Vfuncptr;
	printf("\n--------------------VIRTUAL TABLE---------------------\n");
	while (temp != NULL)
	{
		printf("|---%s(%d)---|", temp->name, temp->Flabel);
		temp = temp->next;
	}
	printf("\n\n");
	return;
}

//----------GLOBAL SYMBOL TABLE FUNCTIONS --------------------------

Gsymbol *G_symbol_table = NULL;
int binding_pos = 4096;
int flabel = 0;

struct Gsymbol *GLookUp(char *Identifier)
{
	if (G_symbol_table == NULL)
		return NULL;
	Gsymbol *temp = G_symbol_table;
	while (temp != NULL && strcmp(temp->name, Identifier) != 0)
	{
		temp = temp->next;
	}
	if (temp == NULL)
		return NULL;
	return temp;
}
void G_Install(char *name, Typetable *type, int row, int col, struct ParamList *param_list, int flabel)
{
	Gsymbol *new_Entry = (Gsymbol *)malloc(sizeof(Gsymbol));
	new_Entry->name = strdup(name);
	new_Entry->type = type;
	if (col == -1)
		new_Entry->size = row;
	else
		new_Entry->size = row * col;
	new_Entry->row = row;
	new_Entry->col = col;
	new_Entry->binding = binding_pos;
	new_Entry->Ctype = NULL;
	if (col == -1)
		binding_pos += row;
	else
		binding_pos += row * col;
	new_Entry->next = NULL;
	new_Entry->param_list = param_list;
	new_Entry->flabel = flabel;
	if (G_symbol_table == NULL)
	{
		G_symbol_table = new_Entry;
	}
	else
	{
		Gsymbol *temp = G_symbol_table;
		while (temp != NULL)
		{
			if (strcmp(temp->name, name) == 0)
			{
				printf("ERROR: redeclaration of variable %s\n", name);
				exit(1);
			}
			if (temp->next == NULL)
				break;
			temp = temp->next;
		}
		temp->next = new_Entry;
	}
}

void print_GSymbolTable()
{
	Gsymbol *temp = G_symbol_table;
	printf("---------------------------------------GLOBAL SYMBOL TABLE---------------------------------------\n");
	if (temp == NULL)
		printf("---------------------------empty-----------------------------\n");
	while (temp != NULL)
	{
		printf("%s:%d:%s (%d,%d) f_label:%d  |||  ", temp->name, temp->binding, temp->type ? temp->type->name : temp->Ctype->name, temp->row, temp->col, temp->flabel);
		temp = temp->next;
	}
	printf("\n\n");
};
//============================================================================
// IDENTIFIER CHECKING AND SETTING UP / ADDITIONAL SEMANTIC CHECKING FUNCTIONS

int field_validifier(struct tnode *field_node)
{

	struct tnode *temp = field_node->left;
	struct tnode *identifier_node = field_node->left;
	struct Typetable *curr_type = NULL;
	struct Classtable *curr_ctype = NULL;
	struct Fieldlist *curr_field;
	int self_access = 0;
	int isClassType = 0; // To check if intermediate fields are class types
	int identifier_checked = 0;

	if (temp->nodetype == SELF_NODE)
	{
		self_access = 1;
	}

	curr_type = temp->type;
	curr_ctype = temp->Ctype;

	if (curr_ctype)
		isClassType = 1;

	while (temp != NULL)
	{
		char *field_name = temp->left ? temp->left->varname : NULL;

		if (curr_ctype && temp->left != NULL && self_access == 0)
		{
			printf("ERROR: Fields/methods of class %s are private\n", identifier_node->varname);
			exit(1);
		}
		else if (curr_ctype && temp->left == NULL)
		{
			field_node->type = curr_type;
			field_node->Ctype = curr_ctype;
			break;
		}
		else if (self_access)
		{ // if self keyword has been used
			curr_field = Class_Flookup(curr_ctype, field_name);
			if (curr_field == NULL)
			{
				printf("ERROR: Field (%s) doesn't exist for class (%s)\n", field_name, curr_ctype->name);
				exit(1);
			}
			else
			{
				curr_type = curr_field->type;
				curr_ctype = curr_field->ctype;
				// if(curr_ctype)printf("class :%s\n",curr_ctype->name);
				self_access = 0;
				identifier_checked = 1;
			}
		}
		else if (!self_access && !identifier_checked)
		{

			int scope_of_var = check_identifier(temp);
			if (scope_of_var == 1)
			{ // Global variable
				curr_type = temp->Gentry->type;
				curr_ctype = temp->Gentry->Ctype;
			}
			else if (scope_of_var == 2)
			{ // Local variable
				curr_type = temp->Lentry->type;
				curr_ctype = NULL;
			}
			identifier_checked = 1;
			continue;
		}
		else if (identifier_checked)
		{
			if (temp->left != NULL)
			{
				field_name = temp->left->varname;
			}
			else
			{
				break;
			}
		
			curr_field = FLookup(curr_type, field_name);
			if (curr_field == NULL)
			{
				printf("ERROR: Field '%s' doesn't exist for type %s\n", field_name, curr_type->name);
				return -1;
			}
			else
			{
				curr_type = curr_field->type;
				curr_ctype = curr_field->ctype;
				// if(field_node->type) printf("type: %s\n",field_node->type->name);
				// if(field_node->Ctype) printf("class_type: %s\n",field_node->Ctype->name);
				if (curr_ctype)
					isClassType = 1;
				else
					isClassType = 0;
			}
		}

		temp = temp->left;
	}
	field_node->type = curr_type;
	field_node->Ctype = curr_ctype;
	return 1;
}

int check_identifier(struct tnode *IDnode)
{
	// printf("%s\n",IDnode->Gentry);

	struct Gsymbol *Gentry = IDnode->Gentry;
	struct Lsymbol *Lentry = IDnode->Lentry;
	if (IDnode->nodetype == ARRAY_NODE)
	{
		Gentry = IDnode->left->Gentry;
		Lentry = IDnode->left->Lentry;
	}
	if (Lentry == NULL && Gentry == NULL)
	{
		printf("ERROR: variable not declared: %s\n", IDnode->varname);
		exit(1);
	}
	if (Lentry != NULL)
	{
		IDnode->type = Lentry->type;
		return 2;
	}

	if (Gentry != NULL)
	{
		IDnode->type = Gentry->type;
		IDnode->Ctype = Gentry->Ctype;
		return 1;
	}
}

int returnStmt_checker(struct tnode *t, Typetable *type)
{
	if (t == NULL)
	{
		return 1;
	}
	if (t->nodetype == RETURN_NODE)
	{
		Typetable *expression_type = t->left->type;
		if (strcmp(expression_type->name, type->name) != 0)
		{
			printf("ERROR: RETURN TYPE MISMATCH WITH FUNCTION RETURN TYPE: \n");
			exit(1);
		}
	}
	returnStmt_checker(t->left, type);
	returnStmt_checker(t->right, type);
}

//============================================================================
// LOCAL SYMBOL TABLE FUNCTIONS

Lsymbol *Ltable = NULL;
int local_binding = 1;
int param_binding = 1;
int self_binded =0;
void L_Install(char *name, Typetable *type, int isArg)
{
	struct Lsymbol *Lentry = (Lsymbol *)malloc(sizeof(Lsymbol));
	Lentry->name = strdup(name);
	Lentry->type = type;
	Lentry->next = NULL;
	if (!isArg)
		Lentry->binding = local_binding++;
	else
		Lentry->binding = param_binding++;
	Lentry->isArg = isArg;
	struct Lsymbol *temp = Ltable;
	if (temp == NULL)
	{
		Ltable = Lentry;
		return;
	}
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = Lentry;
	return;
}

struct Lsymbol *LLookUp(char *name)
{
	if (Ltable == NULL)
		return NULL;
	struct Lsymbol *temp = Ltable;
	while (temp != NULL)
	{
		if (strcmp(temp->name, name) == 0)
		{
			return temp;
		}
		temp = temp->next;
	}
	return NULL;
}

void L_cleanup()
{
	struct Lsymbol *temp;
	while (Ltable != NULL)
	{
		temp = Ltable;
		Ltable = Ltable->next;
		free(temp->name); // Free the dynamically allocated name string
		free(temp);				// Free the node
	}
	return;
}

void print_Ltable()
{
	struct Lsymbol *temp = Ltable;
	printf("---------------------------------------LOCAL SYMBOL TABLE---------------------------------------\n");
	if (temp == NULL)
	{
		printf("----empty----\n");
		return;
	}
	while (temp != NULL)
	{
		printf("%s:%d:%s  |||  ", temp->name, temp->binding, temp->type->name);
		temp = temp->next;
	}
	printf("\n\n");
	return;
}

//============================================================================
// PARAM_LIST AND ARG_LIST FUNCTIONS

struct FuncArgs *create_arglist(struct tnode *arg)
{
	FuncArgs *arglist = (FuncArgs *)malloc(sizeof(FuncArgs));
	arglist->arguement = arg;
	arglist->next = NULL;
	return arglist;
}

struct FuncArgs *append_arglist(struct FuncArgs *head, struct tnode *arg)
{
	FuncArgs *temp = head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	FuncArgs *new_arg = create_arglist(arg);
	temp->next = new_arg;
	return head;
}
struct FuncArgs *reverse_arglist(struct FuncArgs *head)
{
	struct FuncArgs *prev = NULL;
	struct FuncArgs *current = head;
	struct FuncArgs *next = NULL;

	while (current != NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	return prev;
}

void print_arglist(struct FuncArgs *head)
{
	FuncArgs *temp = head;
	while (temp != NULL)
	{
		preorder(temp->arguement);
		temp = temp->next;
	}
	return;
}

struct ParamList *create_param_list(Typetable *type, char *name)
{
	ParamList *new_param = (ParamList *)malloc(sizeof(ParamList));
	new_param->type = type;
	new_param->name = strdup(name);
	new_param->next = NULL;
	return new_param;
}
struct ParamList *append_param_list(ParamList *head, ParamList *new_param)
{
	if (head == NULL)
	{
		return new_param;
	}
	ParamList *temp = head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new_param;
	return head;
}

void print_param_list(struct ParamList *head)
{
	ParamList *temp = head;
	while (temp != NULL)
	{
		printf("%s ||| ", temp->name);
		temp = temp->next;
	}
	printf("\n\n");
	return;
}

int verify_func_signature(struct FuncArgs *arg_list, struct ParamList *param_list)
{
	struct FuncArgs *arg_scanner = arg_list;
	struct ParamList *param_scanner = param_list;
	while (arg_scanner != NULL && param_scanner != NULL)
	{
		Typetable *param_type = param_scanner->type;
		Typetable *arg_type = arg_scanner->arguement->type;
		if (strcmp(param_type->name, arg_type->name) != 0)
			return 0;
		arg_scanner = arg_scanner->next;
		param_scanner = param_scanner->next;
	}
	if (arg_scanner == NULL && param_scanner == NULL)
		return 1;

	return 0;
}

//========================================================================================

void preorder(struct tnode *root)
{
	// printf("Preordering\n");
	if (root == NULL)
		return;
	if (root->nodetype == OPERATOR_NODE)
	{
		printf("%s ", (root->op));
	}
	else if (root->nodetype == CONNECTOR_NODE)
	{
		printf("connector ");
	}
	else if (root->nodetype == READ_NODE)
	{
		printf("read ");
	}
	else if (root->nodetype == WRITE_NODE)
	{
		printf("write ");
	}
	else if (root->nodetype == IF_NODE)
	{
		printf("if ");
	}
	else if (root->nodetype == IF_ELSE_NODE)
	{
		printf("if-else ");
	}
	else if (root->nodetype == WHILE_NODE)
	{
		printf("while ");
	}
	else if (root->nodetype == BREAK_NODE)
	{
		printf("break ");
	}
	else if (root->nodetype == CONTINUE_NODE)
	{
		printf("continue ");
	}
	else if (root->nodetype == DO_WHILE_NODE)
	{
		printf("do-while ");
	}
	else if (root->nodetype == FUNCTION_NODE)
	{
		printf("function ");
		print_arglist(root->argList);
	}
	else if (root->nodetype == RETURN_NODE)
	{
		printf("return ");
	}
	else if (root->nodetype == BREAKPOINT_NODE)
	{
		printf("breakpoint ");
	}
	else if (root->nodetype == ARRAY_NODE)
	{
		printf("array ");
	}
	else if (root->nodetype == _2D_ARRAY_NODE)
	{
		printf("2d ");
	}
	else if (root->nodetype == ADDRESS_NODE)
	{
		printf("& ");
	}
	else if (root->nodetype == DEREFERENCE_NODE)
	{
		printf("* ");
	}
	else if (root->nodetype == FIELD_NODE)
	{
		printf("field ");
	}
	else if (root->nodetype == INITIALIZE_NODE)
	{
		printf("initialize ");
	}
	else if (root->nodetype == ALLOC_NODE)
	{
		printf("alloc ");
	}
	else if (root->nodetype == FREE_NODE)
	{
		printf("free ");
	}
	else if (root->nodetype == NULL_NODE)
	{
		printf("null ");
	}
	else if (root->nodetype == NEW_NODE)
	{
		printf("new ");
	}
	else if (root->nodetype == SELF_NODE)
	{
		printf("self ");
	}
	else if (root->nodetype == CONST_NODE)
	{
		if (strcmp(root->type->name, "int") == 0)
			printf("%d ", root->val);
		else
			printf("%s ", root->varname);
	}
	else if (root->nodetype == IDENTIFIER_NODE)
	{
		if (root->Lentry)
			printf("%s ", root->Lentry->name);
		else if (root->Gentry)
			printf("%s ", root->Gentry->name);
		else
			printf("%s ", root->varname); // for printing fields
	}
	preorder(root->left);
	preorder(root->right);
	preorder(root->middle);
	return;
}
