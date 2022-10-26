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
	while (s[i])
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
