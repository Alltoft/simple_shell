#include "shell.h"

/**
 * exit_shell - function that exists the shell
 * @command: command
 * @status: exit status
 */

void exit_shell(char **command, int *status)
{
	Fr2Darray(command);
	exit(*status);
}
