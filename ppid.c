#include <stdio.h>
#include <unistd.h>

/**
 * main - PID
 *
 * Return: Always 0.
 */
int my_ppid(void)
{
    pid_t my_ppid;

    my_ppid = getppid();
    return (my_ppid);
}
