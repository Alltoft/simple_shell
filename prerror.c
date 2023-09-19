#include "shell.h"

void prerror(char *sname, char *cmd, int nmbr)
{
	char *index, mssg[] = ": not found\n";

	index = itoa(nmbr);

	write(STDERR_FILENO, sname, _strlen(sname));
	write(STDERR_FILENO, ": ", 2);
	write(STDERR_FILENO, index, _strlen(index));
	write(STDERR_FILENO, ": ", 2);
	write(STDERR_FILENO, cmd, _strlen(cmd));
	write(STDERR_FILENO, mssg, _strlen(mssg));
}
