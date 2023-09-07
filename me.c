#include <stdio.h>
#include <unistd.h>

int main(void)
{

    pid_t ppid = getppid();
    pid_t pid = getpid();
    printf("my parent process id is %d\nmy process id is %d\n", ppid, pid);
    return (0);
}
