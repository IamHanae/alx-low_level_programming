#include "main.h"

/**
 * leet - Encodes a string to 1337.
 * @s: The string to be encoded.
 * Return: A pointer to the encoded string.
 */
char *leet(char *s)
{
	int i = 0, j;
	char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (s[i])
	{
		for (j = 0; j <= 7; j++)
		{
			if (s[i] == leet[j] ||
			    str[i] - 32 == leet[j])
				str[i] = j + '0';
		}

		i++;
	}

	return (s);
}
