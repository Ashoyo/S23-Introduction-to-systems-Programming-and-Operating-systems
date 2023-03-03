// same logic as the other function 



// copy stime.c to mod 





#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


// coopy my utime code to mod, honest just the same code but changing the position to 15

unsigned long int get_virtualmemo(int pid){



// copy from my s.c file 

    char stat_file[100];
    sprintf(stat_file, "/proc/%d/statm", pid); 

    FILE* fp = fopen(stat_file, "r");
    if (fp == NULL) {
        perror("error");
        exit(0);



    }
    
    

    unsigned long int vmeno;
    fscanf(fp, "%lu", &vmeno);

    fclose(fp);



    // converts utime string to unsign int 
    
// strtoul(utime, NULL, 10);

  return vmeno; 










}