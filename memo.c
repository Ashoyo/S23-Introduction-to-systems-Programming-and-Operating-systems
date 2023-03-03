#include <stdio.h>
#include <stdlib.h>



int main(int argc, char const *argv[])
{
    
   
    int mem_free=0;

    int buffer=0;

    char *source = NULL;   
    size_t len = 0;

    FILE *meminfo = fopen("/proc/meminfo", "r");

// check for error 

    if (meminfo == NULL) {
        perror("fopen failed");
        return 1;
    }

 

// loop to print my buffer and memory free 
        while (getline(&source, &len, meminfo)!=-1)
        {
            if (sscanf(source, "free memory : %d", &mem_free) == 1) {

                mem_free++;
            } else if (sscanf(source, " buffer size : %d", &buffer) == 1) {


                printf("buff  size :%d  KB\n",buffer);


            

            }
        }

        fclose(meminfo);
        free(source);
    
        printf(" num of free mem: %d KB\n", mem_free);

     
     return 0;
            
}
        
