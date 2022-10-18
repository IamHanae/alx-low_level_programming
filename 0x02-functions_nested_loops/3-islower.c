#include "main.h"

/**
 * islower - Checks for lowercase characters
 *
 * Return: 1 is lowercase, 0 otherwise
 */
int _islower(int c)
{
	int i;
	char s[26] = "abcdefghijklmnopqrstuvwxyz";

	for (i = 0; i < 26; i++)
	{
		if (c == s[i])
			return (1);
		else
			return (0);
	}
}
