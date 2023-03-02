#include <stdio.h>
#include <stdlib.h>
#include <getopt.h>
#include <string.h>


#include "s1.c"


// declear 


char get_process_state(int pid);





int main(int argc, char *argv[])
{
    char str_pid[15];
    int pid=-1;
    int opt;
    int s_flag = 0, U_flag = 1, S_flag = 0, v_flag = 0, c_flag = 1;

    // Parse command line arguments using getopt()
    while ((opt = getopt(argc, argv, "p:sUSvc")) != -1)
    {
        switch (opt)
        {
            case 'p':
                strcpy(str_pid, optarg);
                int pid = atoi(str_pid);

                break;
            case 's':
                s_flag = 1;
                break;
            case 'U':
                U_flag = 1;
                break;
            case 'S':
                S_flag = 1;
                break;
            case 'v':
                v_flag = 1;
                break;
            case 'c':
                c_flag = 1;
                break;
            default:
                fprintf(stderr, "Usage: %s [-p <pid>] [-s] [-U] [-S] [-v] [-c]\n", argv[0]);
                exit(0);
        }
    }

    // Call   functions based on arg 
    if (s_flag)
    {
        char state_var = get_process_state(pid);
        printf("process state: %c\n", state_var);

    }

    return 0;
}
 





  /*  if (U_flag)
    {
        get_process_Utime();
    }

    if (S_flag)
    {
        get_process_stime();
    }

    if (v_flag)
    {
        get_virtualmemo();
    }

    if (c_flag)
    {
        void  get_configuration();
    }
*/
     


        


    
    





