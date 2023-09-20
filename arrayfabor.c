#include "shell.h"

/**
 * Fr2Darray - frees a 2d array
 * @arr: the array
 * Return: none
 */
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
