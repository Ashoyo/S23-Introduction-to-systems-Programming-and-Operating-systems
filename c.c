
// same logic as utime


#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


// coopy my utime code to mod, honest just the same code but changing the position to 15

 char*  get_configuration(int pid){



// copy from my s.c file 

    char stat_file[1000];
    sprintf(stat_file, "/proc/%d/cmdline", pid); 

    FILE* fp = fopen(stat_file, "r");
    if (fp == NULL) {
        perror("error");
        exit(0);



    }
    
    
// stores utime there, pointer bc char only store an single splace

    char* arg = (char*) malloc(100 * sizeof(char));
     fgets(stat_file, 1000, fp);




    int position = 0;
    char* coutner  = strtok(arg, "\0");

    while (coutner != NULL) {
        position++;
        coutner = strtok(NULL, "\0");
    }

    // allocate memory for the output string
    char* cmdline = (char*) malloc(position * sizeof(char));
    strcpy(cmdline, arg);







    // free memory
    free(arg);
    fclose(fp);











}