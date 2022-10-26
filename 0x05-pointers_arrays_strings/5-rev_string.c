#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: String to reverse
 * Return: Void
 */
void rev_string(char *s)
{
	int i = 0;

	while (i >= 0)
	{
		if (s[i] == '\0')
			break;
		i++;
	}

	for (; i >= 0; i--)
		_putchar(s[i]);
}
