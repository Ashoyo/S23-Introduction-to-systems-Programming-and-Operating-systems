#include <stdio.h>
#include <stdlib.h>



int main(int argc, char const *argv[])
{
    
   
    int free=0;

    int buffer=0;

    char *source = NULL;   
    size_t len = 0;

    FILE *meminfo = fopen("/proc/meminfo", "r");

// check for error 

    if (meminfo == NULL) {
        perror("fopen failed");
        return 1;
    }

 

// loop to print my processor and cache 
        while (getline(&source, &len, meminfo)!=-1)
        {
            if (sscanf(source, "free memory : %d", &free) == 1) {
            } else if (sscanf(source, " buffer size : %d", &buffer) == 1) {
            }
        }

        fclose(meminfo);
        free(source);
    
     printf(" num of free mem: %ld KB\n", free);
     printf("buff  size :%ld  KB\n",buffer);
     
     
     return 0;
            
}
        
