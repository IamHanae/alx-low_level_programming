#include "main.h"

/**
 * print_rev - Prints a string, in reverse
 * @s: The string to reverse
 * Return: Void
 */
void print_rev(char *s)
{
	int i = 0;

	while (i >= 0)
	{
		if (s[i] == '\0')
			break;
		i++;
	}

	for (i--; i >= 0; i--)
		_putchar(s[i]);

	_putchar('\n');
}
