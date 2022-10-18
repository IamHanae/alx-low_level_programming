#include "main.h"

/**
 * _isalpha - Checks for alphabetic characters
 * @c: The number to be checked
 *
 * Return: 1 if c is a letter, 0 otherwise
 */
int _isalpha(int c)
{
	int i;
	int res;

	if(c >= 65 && c <= 122)
		res = 1;
	else
		res = 0;

	return (res);
}
