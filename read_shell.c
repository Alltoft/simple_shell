#include "shell.h"

/**
 * *prompt_shell - reads a line and print it
 *
 * Return: the line
 */

char *prompt_shell(void)
{
	char *line = NULL;
	size_t len = 0;
	ssize_t a;

	if (isatty(STDIN_FILENO))
		write(STDOUT_FILENO, "$ ", 2);

	a = getline(&line, &len, stdin);

	if (a == -1)
	{
		free(line);
		return (NULL);
	}
	return (line);
}
