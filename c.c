
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
    //  read  entire contents of the /proc/cmdline file so i do that and put into buffer but we dont know the size so I malloc 


    char* buffer = (char*) malloc(1000 * sizeof(char));
    fgets(buffer,1000,fp);
    fclose(fp);



    // solve the null issue here, for looping 

    for (int i = 0; i < strlen(buffer); i++) {
        if (buffer[i] == '\0') {
            buffer[i] = ' ';
        }
    }


    return buffer;

    













}