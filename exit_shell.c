#include "shell.h"

/**
 * exit_shell - function that exists the shell
 * @command: command
 * @status: exit status
 * @argv: arguments
 * @idx: index of the command
 */

void exit_shell(char **command, char **argv, int *status, int idx)
{
	int exit_value = (*status);
	char *index, mssg[] = ": exit: Illegal number: ";
	char idx_str[20];

	if (command[1])
	{
		if (positive_num(command[1]))
		{
			exit_value = _atoi(command[1]);
		}
			else
			{
			snprintf(idx_str, sizeof(idx_str), "%d", idx);
	index = _itoa(idx);
	write(STDERR_FILENO, argv[0], _strlen(argv[0]));
	write(STDERR_FILENO, ": ", 2);
	write(STDERR_FILENO, index, _strlen(index));
	write(STDERR_FILENO, mssg, _strlen(mssg));
	write(STDERR_FILENO, command[1], _strlen(command[1]));
	write(STDERR_FILENO, "\n", 1);
	free(index);
	free(command);
	Fr2Darray(command);
	(*status) = 2;
	return;
			}
	}

	free(command);
	Fr2Darray(command);
	exit(exit_value);
}
