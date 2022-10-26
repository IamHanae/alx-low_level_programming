#include "main.h"

/**
 * print_rev - Prints a string, in reverse
 * @s: The string to reverse
 * Return: Void
 */
void print_rev(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		i++;
	}

	for (i--; i >= 0; i--)
		_putchar(s[i]);

	_putchar('\n');
}
