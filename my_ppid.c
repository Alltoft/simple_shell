#include <stdio.h>
#include <unistd.h>

int main(void)
{
    pid_t ppid = getppid();
    printf("my parent process id is %d\n", ppid);
    return (ppid);
}
