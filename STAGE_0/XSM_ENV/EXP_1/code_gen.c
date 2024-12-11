#include <stdlib.h>
#include <stdio.h>

void Header(FILE *target_file)
{
    fprintf(target_file, "%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n", 0, 2056, 0, 0, 0, 0, 0, 0);
    return;
}

void PrintSyscall(FILE *target_file, int syscallNo, char *Ri)
{

    // syscall Number
    fprintf(target_file, "MOV R2, %d\n", syscallNo);
    fprintf(target_file, "PUSH R2\n");

    // file descriptor arguement
    fprintf(target_file, "MOV R2, -2\n");
    fprintf(target_file, "PUSH R2\n");

    // data to be printed
    fprintf(target_file, "PUSH %s\n", Ri);

    fprintf(target_file, "PUSH R0\n");
    fprintf(target_file, "PUSH R0\n");

    fprintf(target_file, "INT 7\n");

    fprintf(target_file, "POP R0\n");
    fprintf(target_file, "POP R1\n");
    fprintf(target_file, "POP R1\n");
    fprintf(target_file, "POP R1\n");
    fprintf(target_file, "POP R1\n");
    return;
}

void exitSyscall(FILE *target_file)
{
    fprintf(target_file, "MOV R2,10\n"); // syscall no for exit
    fprintf(target_file, "PUSH R2\n");

    fprintf(target_file, "PUSH R0\n");
    fprintf(target_file, "PUSH R0\n");
    fprintf(target_file, "PUSH R0\n");

    fprintf(target_file, "INT 10\n");

    return;
}
void readSyscall(FILE* target_file,int address){

    fprintf(target_file,"MOV R2, 4\n");
    fprintf(target_file,"PUSH R2\n");

    fprintf(target_file,"MOV R1,-1\n");
    fprintf(target_file,"PUSH R1\n");

    fprintf(target_file,"MOV R1,%d\n",address);
    fprintf(target_file,"PUSH R1\n");
    fprintf(target_file,"PUSH R1\n");
    fprintf(target_file,"PUSH R1\n");

    fprintf(target_file,"INT 6\n");

    fprintf(target_file, "POP R0\n");
    fprintf(target_file, "POP R1\n");
    fprintf(target_file, "POP R1\n");
    fprintf(target_file, "POP R1\n");
    fprintf(target_file, "POP R1\n");
    
    return ;
}

int main()
{

    FILE *target_file = fopen("target_file", "w");
    if (target_file == NULL)
    {
        printf("Error Opening File\n");
        return 0;
    }

    Header(target_file);

    fprintf(target_file, "BRKP\n");
    // fprintf(target_file, "MOV R0, 3\n");
    // fprintf(target_file, "MOV R1, 2\n");
    // fprintf(target_file, "ADD R0, R1\n");
    fprintf(target_file, "MOV SP, 4098\n");

    readSyscall(target_file,4096);
    readSyscall(target_file,4097);
    readSyscall(target_file,4098);

    fprintf(target_file,"MOV R0, [4096]\n");
    fprintf(target_file,"MOV R1, [4097]\n");
    fprintf(target_file,"MOV R2, [4098]\n");
    

    exitSyscall(target_file);

    fclose(target_file);

    printf("Instruction written to file successfully..\n");

    return 0;
}