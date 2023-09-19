#include "shell.h"

void Fr2Darray(char **arr)
{
	int i = 0;

	if (!arr)
		return;

	while (arr[i])
	{
		free(arr[i]), arr[i] = NULL;
		i++;
	}

	free(arr), arr = NULL;
}
