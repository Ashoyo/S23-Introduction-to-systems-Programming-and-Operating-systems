#include <stdio.h>
#include <stdlib.h>
#include <getopt.h>
#include <string.h>


#include "s1.c"
#include "u.c"
#include "Stime.c"
#include "v.c"
#include "c.c"






// declear 


char get_process_state(int pid);
char* get_process_Utime(int pid);
char*  get_process_stime(int pid);
char*  get_virtualmemo(int pid);
char*  get_configuration(int pid);



int main(int argc, char *argv[])
{
    char str_pid[15];
    int pid=-1;
    int opt;
    int s_flag = 0, U_flag = 1, S_flag = 0, v_flag = 0, c_flag = 0;

    // Parse command line arguments using getopt()
    while ((opt = getopt(argc, argv, "p:sUSvc")) != -1)
    {
        switch (opt)
        {
            case 'p':
                strcpy(str_pid, optarg);
                pid = atoi(str_pid);

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



    
   if (U_flag)
    {


            // converts utime string to unsign int 
            
            
        char* utime=  get_process_Utime(pid);

        printf("utime: %lu \n", strtoul(utime, NULL, 10));
    }


    if (S_flag)
    {
        char* stime=  get_process_stime(pid);

        printf("stime: %lu \n", strtoul(stime, NULL, 10));

    }


    if (v_flag)
    {
        
       char*  vmeno  = get_virtualmemo(pid);
        printf(" vmeno: %lu \n", strtoul(vmeno, NULL, 1000));



        }



    
    if (c_flag)
    {
    char* cmdline = get_configuration(pid);

    }    

    return 0;



}
 







     


        


    
    





