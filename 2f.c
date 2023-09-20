#include "shell.h"

/**
 * positive_num - cheks if nums are positive
 * @str: string to verify
 * Return: 1 if str is positive
 */ 

int positive_num(char *str)
{
	int i;

	if (!str)
		return (0);
	for (i = 0; str[i]; i++)
	{

		if (str[i] < '0' || str[i] > '9')
			return (0);
	}
	return (1);
}

/**
 * _atoi - convert sting to int
 * @str: string
 * Return: value
 */

int _atoi(char *str)
{
	int i, num = 0;

	for (i = 0; str[i]; i++)
	{
		num *= 10;
		num += (str[i] - '0');
	}
	return (num);
}
