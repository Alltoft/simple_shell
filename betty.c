#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - entry point
 * Return: 0
 */

int main(void)
{
	char *c = "hello wolrd";
	int length = strlen(c);

	write(1, c, length);

	return (0);
}
