#include <stdlib.h>
#include "shell.h"

/**
 * main - main fuctions
 * @ac: argument count
 * @argv: arguments
 * Return: 0
 */

int main(int ac, char **argv)
{
	char *line;
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
	free(line);
	}
}