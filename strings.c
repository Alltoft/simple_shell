#include "shell.h"

/**
 * _strdup - it duplicates a string
 * @str: is the string
 * Return: ptr
 */

char *_strdup(char *str)
{
	char *ptr;
	int i, len = 0;

	if (str == NULL)
		return (NULL);
	while (str[len])
		len++;

	ptr = malloc(sizeof(char) * (len + 1));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i <= len; i++)
		ptr[i] = str[i];
	return (ptr);
}

/**
 * _strcmp - it compares two strings
 * @s1: is the first string
 * @s2: is the second string
 * Return: cmp
 */

int _strcmp(char *s1, char *s2)
{
	int cmp;

	cmp = (int)*s1 - (int)*s2;
	while (*s1)
	{
		if (*s1 != *s2)
			break;
		s1++;
		s2++;
		cmp = (int)*s1 - (int)*s2;
	}
	return (cmp);
}

/**
 * _strlen - measure a string
 * @s: is the string
 * Return: length
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len])
		len++;
	return (len);
}

/**
 * _strcat - it puts two strings
 * @dest: the 1st string
 * @src: the 2end string
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	char *p = dest;

	while (*p)
		p++;
	while (*src)
	{
		*p = *src;
		p++;
		src++;
	}
	*p = '\0';
	return (dest);
}

/**
 * _strcpy - it coppy a string in a string
 * @dest: 1st string
 * @src: 2end string
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
