#include "shell.h"

/**
 * free_arr - frees memory
 * @arr: arr of string
 * this function allocates memory and frees it
 */

void free_arr(char **arr)
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
