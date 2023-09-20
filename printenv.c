#include "shell.h"

void prenv(char **command, int *status)
{
	int i = 0;
	
	while (environ[i])
	{
		write(STDOUT_FILENO, environ[i], _strlen(environ[i]));
		write(STDOUT_FILENO, "\n", 1);
	}
	Fr2Darray(command);
	(*status) = 0;
}
