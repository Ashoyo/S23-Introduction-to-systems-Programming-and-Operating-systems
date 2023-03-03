#include <stdio.h>
#include <stdlib.h>



int main()
{

    FILE* fp;
    char buffer[1024];

    fp = fopen("/proc/meminfo", "r");
    
    if (fp == NULL) {
        perror("Error ");
        exit(0);
    }

    while (fgets(buffer, sizeof(buffer), fp)) {
        printf("%s", buffer);
    }

    fclose(fp);

    return 0;


}
        
