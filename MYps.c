#include <stdio.h>

int main(int argc, char const *argv[])
{
    
    int processor=0;

    FILE *cpuinfo = fopen("/proc/cpuinfo", "r");


// opens cpu info if fopen works 

    if (cpuinfo)
    {
        int processor=-1;
        int cache = -1;

        char source[10000];


// loop to print my processor and cache 
        while (fgets(source, sizeof(source), cpuinfo))
        {
            if (sscanf(source, "processor : %d", &processor) == 1) {
                processor++;
            } else if (sscanf(source, "cache size : %d", &cache) == 1) {
                printf("Processor %d cache size: %d KB\n", processor, cache);
            }
        }
        fclose(cpuinfo);
    }
     printf(" num of processors: %d\n", processor);
     
     return 0;
            
        }
        


    
    





