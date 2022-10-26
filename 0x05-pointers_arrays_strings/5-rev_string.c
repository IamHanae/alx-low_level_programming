#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: String to reverse
 * Return: Void
 */
void rev_string(char *s)
{
	int i = 0;
	int len, tmp;

	while (s[i] != '\0')
		len++;

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
