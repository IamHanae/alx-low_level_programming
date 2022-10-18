#include "main.h"

/**
 * _islower - Checks for lowercase characters
 *
 * Return: 1 is lowercase, 0 otherwise
 */
int _islower(int c)
{
	int i;
	int res;
	char s[26] = "abcdefghijklmnopqrstuvwxyz";

	for (i = 0; i < 26; i++)
	{
		if (c == _putchar(s[i]))
			res = 1;
		else
			res = 0;
	}
	return (res);
}
