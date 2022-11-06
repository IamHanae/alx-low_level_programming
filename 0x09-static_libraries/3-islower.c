#include "main.h"

/**
 * _islower - Checks for lowercase characters
 * @c: The number to be checked
 *
 * Return: 1 is lowercase, 0 otherwise
 */
int _islower(int c)
{
	int i;
	int res;

	for (i = 0; i < 26; i++)
	{
		if (c >= 97 && c <= 122)
			res = 1;
		else
			res = 0;
	}
	return (res);
}
