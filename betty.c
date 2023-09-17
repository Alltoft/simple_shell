#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

/**
 * main - entry point
 * Return: 0
 */

int main(void)
{
	char *c = "hello world";
	int length = strlen(c);

	write(1, c, length);

	return (0);
}
