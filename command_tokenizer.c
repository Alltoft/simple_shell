#include "shell.h"
#include <string.h>
#include <stdlib.h>

char **command_tokenizer(char *line)
{
	char *token;
	char **command;
	int cnt = 0;
	int i = 0;

	if (!line)
		return(NULL);

	token= strtok(line, " \t\n");
	while (token)
	{
		cnt++;
		token= strtok(NULL, " \t\n");
	}

	command = malloc(sizeof(char *) * (cnt + 1));
	if (!command)
	{
		perror("memory allocation failed");
		exit(EXIT_FAILURE);
	}

	token = strtok(line, " \t\n");
	while (token)
	{
		command[i] = strdup(token);
		if (!command[i])
		{
			perror("memory allocation failed");
			exit(EXIT_FAILURE);
		}
		token = strtok(NULL, " \t\n");
		i++;
	}
	command[i] = NULL;
	return (command);
}
