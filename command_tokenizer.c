#include "shell.h"
#include <string.h>
#include <stdlib.h>

/**
 * command_tokenizer - tokenizes a string into arr of strings
 * @line: input string
 * Return: a pointer to an array of strings
 */

char **command_tokenizer(char *line)
{
	char *token = NULL, *dup = NULL;
	char **command = NULL;
	int cnt = 0;
	int i = 0;

	if (!line)
		return(NULL);

	dup = strdup(line);
	token = strtok(dup, " \t\n");
	if (token == NULL)
	{
		free (line), line = NULL;
		free (dup), dup = NULL;
		return (NULL);
	}
	while (token)
	{
		cnt++;
		token = strtok(NULL, " \t\n");
	}
	free(dup), dup = NULL;

	command = malloc(sizeof(char *) * (cnt + 1));
	if (command == NULL)
	{
		free (line), line = NULL;
		return (NULL);
	}
	token = strtok(line, " \t\n");
	while (token)
	{
		command[i] = strdup(token);
		token = strtok(NULL, " \t\n");
		i++;
	}
	free (line), line = NULL;
	command[i] = NULL;
	return (command);
}
