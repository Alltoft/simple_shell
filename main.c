#include <stdlib.h>
#include "shell.h"
#include <string.h>
#include <stdio.h>

/**
 * main - main fuctions
 * @ac: argument count
 * @argv: arguments
 * Return: 0
 */

int main(int ac, char **argv)
{
	int i ;
	char *line;
	char **command;
	(void) ac;
	(void) argv;

	

	while (1)
	{
		line = prompt_shell();
		if (line == NULL)
		{
			if (isatty(STDIN_FILENO))
			write(STDOUT_FILENO, "\n", 1);
			return (0);
		}
	command = command_tokenizer(line);
	if (!command)
		continue;

	for (i = 0; command[i]; i++)
		printf("%s\n", command[i]);

	for (i = 0; command[i]; i++)
		free(command[i]);
	free(command);
	}
	return 0;
}
