#include <stdio.h>
#include <stdlib.h>


// move myps to here

int main(int argc, char const *argv[])
{
    
    int processor=0;
    int cache = -1;

    char *source = NULL;   
    size_t len = 0;

    FILE *cpuinfo = fopen("/proc/cpuinfo", "r");

// check for error 

    if (cpuinfo == NULL) {
        perror("fopen failed");
        return 1;
    }

 

// loop to print my processor and cache 
        while (getline(&source, &len, cpuinfo)!=-1)
        {
            if (sscanf(source, "processor : %d", &processor) == 1) {
                processor++;
            } else if (sscanf(source, "cache size : %d", &cache) == 1) {
                printf("Processor %d cache size: %d KB\n", processor, cache);
            }
        }

        fclose(cpuinfo);
        free(source);
    
     printf(" num of processors: %d\n", processor);
     
     return 0;
            
}
  