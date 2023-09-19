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

int _execute(char **command, char **argv)
{
	pid_t child;
	int status;

	child = fork();
	if (child == 0)
	{
		if (execve(command[0], command, environ) == -1)
		{
			perror(argv[0]);
			free_arr(command);
			exit(0);
		}
	}
		else
		{
			waitpid(child, &status, 0);
			free_arr(command);
		}
		return (WEXITSTATUS(status));
}
