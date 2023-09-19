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
	int status = 0;
	char *line = NULL;
	char **command = NULL;
	(void) ac;

	while (1)
	{
		line = prompt_shell();
		if (line == NULL)
		{
			if (isatty(STDIN_FILENO))
			write(STDOUT_FILENO, "\n", 1);
			free(line), line = NULL;
			return (status);
		}
	command = command_tokenizer(line);
	if (!command)
		continue;

	status = _execute(command, argv);
	}
}
