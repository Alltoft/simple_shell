#include "shell.h"

char *_getenv(char *variable)
{
	char *cp, *key, *value, *env;
	int i;

	for (i = 0; environ[i]; i++)
	{
		cp = _strdup(environ[i]);
		key = strtok(cp, "=");
		if (_strcmp(key, variable) == 0)
		{
			value = strtok(NULL, "\n");

			env = _strdup(value);
			free(cp);
			return (env);
		}
		free(cp), cp = NULL;
	}
	return (NULL);
}
