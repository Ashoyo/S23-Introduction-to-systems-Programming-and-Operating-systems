#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>



 char* get_process_Utime(int pid){



// copy from my s.c file 

    char stat_file[100];
    sprintf(stat_file, "/proc/%d/stat", pid); 

    FILE* fp = fopen(stat_file, "r");
    if (fp == NULL) {
        perror("error");
        exit(0);



    }
    
    
// stores utime there, pointer bc char only store an single splace

    char* utime = (char*) malloc(100 * sizeof(char));

// set to 14 bc the 14 is the postion in the state file for utime

    int position = 14;
    
    
    
    for (int i = 1; i <= position; i++) {
        
        fscanf(fp, "%s", utime);
}

    fclose(fp);



    // converts utime string to unsign int 
    
// strtoul(utime, NULL, 10);

  return utime; 










}