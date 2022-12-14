#include "main.h"

/**
 * _strncat - Concatenates two strings.
 * @dest: Destination
 * @src: Source
 * @n: The number of bytes
 * Return: Pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int len = 0;

	while (dest[i++])
		len++;

	for (i = 0; src[i] && i < n; i++)
		dest[len++] = src[i];

	return (dest);
}
