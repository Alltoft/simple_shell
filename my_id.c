#include <stdio.h>
#include <unistd.h>

int mypid(void);
{
    pid_t pid = getpid();
    printf("my process id is %d\n", pid);
    return (pid);
}
