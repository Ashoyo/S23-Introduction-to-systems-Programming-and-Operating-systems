#include <stdio.h>
#include <stdlib.h>



int main(int argc, char const *argv[])
{
    
    FILE* fp;
    char buffer[1024];
    unsigned long mem_free = 0;
    unsigned long mem_buffers = 0;

    fp = fopen("/proc/meminfo", "r");
    if (fp == NULL) {
        perror("Error ");
        exit(0);
    }


// get buffer and free 
    
    while (fgets(buffer, sizeof(buffer), fp)) {


        // check the /proc/meminfo for the names of what I need to get then just pass it in sscanf, if the name matches prints the thing inside it 

        if (sscanf(buffer, "MemFree: %lu kB", &mem_free) == 1) {

            printf(" memo : %lu kB\n", mem_free);

        } else if (sscanf(buffer, "Buffers: %lu kB", &mem_buffers) == 1) {

            printf(" buffer : %lu kB\n", mem_buffers);
        }
    }


    fclose(fp);

    return 0;
}
        
