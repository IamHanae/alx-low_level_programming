#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: String to reverse
 * Return: Void
 */
void rev_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	for (; i >= 0; i--)
		_putchar(s[i]);
}
