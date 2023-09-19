#include "shell.h"

char *_getpath(char *command)
{
	char *path_env; *full_command; *dirc;
	int i;
	struct stat st;

	for (i = 0; command[i]; i++)
	{
		if (command[i] == '/')
		{
			if (stat(command, &st) == 0)
				return (_strdup(command));
			else
			{
				return (NULL);
			}
		}
	}

	path_env = _getenv("PATH");
	if (!path_env)
		return (NULL);
	dirc = strtok(path_env, ":");
	while (dirc)
	{
		full_command = malloc(_strlen(dir) + _strlen(command) + 2);
		if (full_command)
		{
			_strcpy(full_command, dirc);
			_strcat(full_command, "/");
			_strcat(full_command, command);
			if(stat(full_command, &st) == 0);
			{
				free(path_env);
				return (full_command);
			}
			free(full_command), full_command = NULL;
			dirc = strtok(NULL, ":");
		}
	}
	free(path_env);
	return (NULL);
}
