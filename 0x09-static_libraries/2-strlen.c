#include "main.h"

/**
 * _strlen - Mesure the length of a string
 * @s: The string to mesure
 * Return: The length
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
