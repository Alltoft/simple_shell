#include "shell.h"

void free_command(char **command)
{
	int i = 0;

	if (!command)
		return;

	while (command[i])
	{
		free(command[i]), command[i] = NULL;
		i++;
	}
	free(command), command = NULL;
}
