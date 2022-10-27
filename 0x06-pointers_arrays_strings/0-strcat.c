#include "main.h"

/**
 * *_strcat - Concatenates two strings.
 * @dest: Destination
 * @src: Source
 * Return: A string
 */
char *_strcat(char *dest, char *src)
{
	char *s[];
	int i, j;

	for (i = 0; *dest[i] != '\0'; i++)
	{
		*s[i] = *dest[i];
	}
	for (j = 0; *src[j] != '\0'; j++)
	{
		i++;
		*s[i] = *src[j];
	}
	return (*s);
}
