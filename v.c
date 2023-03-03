// same logic as the other function 



// copy stime.c to mod 





#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


// coopy my utime code to mod,

char* get_virtualmemo(int pid){



// copy from my s.c file 

    char stat_file[1000000];
    sprintf(stat_file, "/proc/%d/statm", pid); 

    FILE* fp = fopen(stat_file, "r");
    if (fp == NULL) {
        perror("error");
        exit(0);



    }
    
    
// stores utime there, pointer bc char only store an single splace

    char*  vmeno = (char*) malloc(100 * sizeof(char));

// set to 14 bc the 14 is the postion in the state file for utime

    int position = 1;
    
    
    
    for (int i = 1; i <= position; i++) {
        
        fscanf(fp, "%s", vmeno);

    }
    fclose(fp);

    // converts utime string to unsign int 
    
// strtoul(utime, NULL, 10);

  return vmeno; 










}