// same logic as the other function 



// copy stime.c to mod 





#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


// coopy my utime code to mod,

unsigned long int get_virtualmemo(int pid){



// copy from my s.c file 

    char stat_file[1000000];
    sprintf(stat_file, "/proc/%d/statm", pid); 

    FILE* fp = fopen(stat_file, "r");
    if (fp == NULL) {
        perror("error");
        exit(0);



    }
    
    
// the size is show at 1 so  I set this to 1 

    unsigned long int vmeno=1;
    fscanf(fp, "%lu", &vmeno);

    fclose(fp);



    // converts utime string to unsign int 
    
// strtoul(utime, NULL, 10);

  return vmeno; 










}