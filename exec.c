#include "shell.h"

/**
 * _exec - it executes a command
 * @command: is the command
 * @argv: is the name of the shell
 * @nmbr: a counter
 * Return: status
 */

int _exec(char **command, char **argv, int nmbr)
{
	char *fcmd;
	pid_t child;
	int status;

	fcmd = _getpath(command[0]);
	if (!fcmd)
	{
		prerror(argv[0], command[0], nmbr);
		Fr2Darray(command);
		free(fcmd), fcmd = NULL;
		return (127);
	}
	child = fork();
	if (child == 0)
	{
		if (execve(fcmd, command, environ) == -1)
		{
			free(fcmd), fcmd = NULL;
			Fr2Darray(command);
		}
	}
	else
	{
		waitpid(child, &status, 0);
		Fr2Darray(command);
		free(fcmd), fcmd = NULL;
	}
	return (WEXITSTATUS(status));
}
