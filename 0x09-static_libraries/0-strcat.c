#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: Destination
 * @src: Source
 * Return: A string
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int len = 0;

	while (dest[i++])
	{
		len++;
	}
	for (i = 0; src[i]; i++)
	{
		dest[len++] = src[i];
	}
	return (dest);
}
