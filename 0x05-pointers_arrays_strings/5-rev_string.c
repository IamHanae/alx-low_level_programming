#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: String to reverse
 * Return: Void
 */
void rev_string(char *s)
{
	int i;
	int len, tmp, j;

	len = 0
	while (s[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len / 2; i++)
	{
		tmp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = tmp;
	}

	j = 0;
	while (s[j] != '\0')
	{
		_putchar(s[i]);
		j++;
	}
}
