#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

// -s 



int main(void) {

    int ud= getuid();
    pid_t pid = getpid(); 
    char stat_file[100];
    sprintf(stat_file, "/proc/%d/stat", pid); 

    FILE* fp = fopen(stat_file, "r");
    if (fp == NULL) {
        perror("error");
        exit(0);
    }

    char state_var;
    if (fscanf(fp, "%*d %*s %c", &state_var) != 1) {
        perror("error");
        exit(0);
    }

    printf("process state: %c\n", state_var);

    fclose(fp);
    return 0;




}
