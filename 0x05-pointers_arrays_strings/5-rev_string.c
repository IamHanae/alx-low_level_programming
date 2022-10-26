#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: String to reverse
 * Return: Void
 */
void rev_string(char *s)
{
	int i;
	int len, tmp;

	len = _strlen(s);

	for (i = 0; i < len / 2; i++)
	{
		tmp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = tmp;
	}

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
}
