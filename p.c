#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>


// stole from the book 

int p() {
    char target[32];
    int pid;
    /* Read the target of the symbolic link. */
    readlink("/proc/self", target, sizeof(target));
    sscanf(target, "%d", &pid);
    return (pid_t) pid;
}

int main() {
    printf("/proc/self reports process id %d\n", (int) p());
    printf("getpid() reports process id %d\n", (int) getpid());
    return 0;
}
