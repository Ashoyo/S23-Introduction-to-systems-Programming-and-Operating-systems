#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

// -s 



char get_process_state(int pid){

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


    fclose(fp);
    return state_var;




}
