#include "shell.h"

/**
 * _getenv - it gets an enviren
 * @path: is the path
 * Return: NULL
 */

char *_getenv(char *path)
{
	char *tmp, *key, *value, *env;
	int i = 0;

	while (environ[i])
	{
		tmp = _strdup(environ[i]);
		key = strtok(tmp, "=");
		if (_strcmp(key, path) == 0)
		{
			value = strtok(NULL, "\n");
			env = _strdup(value);
			free(tmp);
			return (env);
		}
		free(tmp), tmp = NULL;
		i++;
	}
	return (NULL);
}
