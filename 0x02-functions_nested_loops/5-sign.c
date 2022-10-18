#include "main.h"

/**
 * print_sign - Prints the sign of a number
 * @n: the number to be checked
 *
 * Return: 1 if n is greater than 0, 0 is n is zero, -1 otherwise
 */
int print_sign(int n)
{
	int res;
	char c;

	if (n > 0)
	{
		res = 1;
		c = '+';
	}
	else if (n == 0)
	{
		res = 0;
		c = '0';
	}
	else
	{
		res = -1;
		c = '-';
	}
	_putchar(c);
	return (res);
}
