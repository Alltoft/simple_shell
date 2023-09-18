#include "shell.h"
#include <string.h>
#include <stdlib.h>

char **command_tokenizer(char *line)
{
	char *token, *dup;
	char **command;
	int cnt = 0;
	int i = 0;

	dup = strdup(line);
	if (!dup)
	{
		free(dup), dup = NULL;
		return(NULL);
	}

	token = strtok(dup, " \t\n");
	if (!token)
		free(token), token = NULL;
	while (token)
	{
		cnt++;
		token= strtok(NULL, " \t\n");
	}
	free(token), token = NULL;
	command = malloc(sizeof(char *) * (cnt + 1));
	if (!command)
	{
		perror("memory allocation failed");
		free(command);
		exit(EXIT_FAILURE);
	}

	token = strtok(strdup(line), " \t\n");
	while (token)
	{
		command[i] = strdup(token);
		if (!command[i])
		{
			perror("memory allocation failed");
			free(command);
			exit(EXIT_FAILURE);
		}
		token = strtok(NULL, " \t\n");
		i++;
	}
	free (strdup(line)), strdup(line) = NULL;
	free(token), token = NULL;
	command[i] = NULL;
	free(dup);
	return (command);
}
