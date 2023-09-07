#include <stdio.h>
#include <unistd.h>

/**
 * main - PID
 *
 * Return: Always 0.
 */
int my_ppid()
{
    pid_t my_ppid;

    my_ppid = getpid();
    return (my_ppid);
}
