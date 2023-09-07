#include <stdio.h>
#include <unistd.h>

int my_pid(void)
{
    pid_t pid;
   pid = getpid();

    return (pid);
}
