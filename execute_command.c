#include "shell.h"
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdio.h>

int _execute_command(char **command)
{
	pid_t child;
	int status;

	child = fork();
	if (child == 0)
	{
		if (execve(command[0], command, env) == -1)
		{
			perror(argv[0]);
			free(command);
			exit(0);
		}
	}
		else
		{
			waitpid(child, &status, 0);
			free(command);
		}
		return(WEXITSTATUS(status));
}
