#include "main.h"

/**
 * _strchr - Locates a character in a string.
 * @s: The string to look into.
 * @c: The character to locate.
 *
 * Return: The pointer to the first occurence of c.
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return ('\0');
}
