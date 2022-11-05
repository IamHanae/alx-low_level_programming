#include "main.h"

/**
 * strlen_noWilds - Return the length of s.
 * @s: The string to mesure.
 * Return: The length.
 */
int strlen_noWilds(char *s)
{
	int len = 0;
	int i = 0;

	if (*(s + i))
	{
		if (*s != '*')
			len++;
		i++;
		len += strlen_noWilds(str + i);
	}
	return (len);
}

/**
 * iter_wild - Iterate through s to locate a *
 * @s: The string to iterate through.
 * Return: Void
 */
void iter_wild(char **s)
{
	if (**s == '*')
	{
		(*s)++;
		iter_wild(s);
	}
}

/**
