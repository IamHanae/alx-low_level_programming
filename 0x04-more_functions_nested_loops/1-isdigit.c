#include "main.h"

/**
 * _isdigit - checks for a digit (0 through 9).
 * @c: The number to check
 * Return: 1 if a digit. 0 otherwise.
 */
int _isdigit(int c)
{
	int res;

	if (c >= 0 && c <= 9)
		res = 1;
	else
		res = 0;

	return (res);
}
