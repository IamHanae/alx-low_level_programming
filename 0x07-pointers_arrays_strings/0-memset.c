#include "main.h"

/**
 * _memset - Fills memory with constant byte.
 * @s: Pointer to the memory area to fill.
 * @b: The character to fill the area with.
 * @n: The number of bytes to be filled.
 *
 * Return: A pointer to the filled memory area.
 */
char *_memset(char *s, int b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
