// same logic as the other function 



// copy stime.c to mod 





#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


// coopy my utime code to mod,

int  get_virtualmemo(int pid){



// copy from my s.c file 

    char stat_file[1000000];
    sprintf(stat_file, "/proc/%d/statm", pid); 

    FILE* fp = fopen(stat_file, "r");
    if (fp == NULL) {
        perror("error");
        exit(0);



    }
    
// to set postiion to 1 and fscanf and close 
    int vms;
    fscanf(fp, "%d", &vms);
    fclose(fp);
    


return vms;








}