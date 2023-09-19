#include "shell.h"
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdio.h>

/**
 * _execute - function that executes a command
 * @command: command to execute
 * @argv: arguments
 * Return: status
 */

int _execute(char **command, char **argv, int idx)
{
	char *full_command;
	pid_t child;
	int status;

	full_command = _getpath(command[0]);
	if (full_command == NULL)
	{
		print_error(argv[0], command[0], idx);
		free_arr(command);
		return(127);
	}

	child = fork();
	if (child == 0)
	{
		if (execve(full_command, command, environ) == -1)
		{
			free(full_command), full_command = NULL;
			free_arr(command);
		}
	}
		else
		{
			waitpid(child, &status, 0);
			free_arr(command);
			free(full_command), full_command = NULL;
		}
		return (WEXITSTATUS(status));
}
