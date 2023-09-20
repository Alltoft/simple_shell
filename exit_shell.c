#include "shell.h"

void exit_shell(char **command, int *status)
{
	Fr2Darray(command);
	exit(*status);
}
