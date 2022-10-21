#include "main.h"

/**
 * print_number - Prints an integer
 * @n: The number to check
 * Return: void
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		m = n * -1;
	}
	else
	{
		m = n;
	}

	c = 1;

	while (m > 9)
	{
		m /= 10;
		c *= 10;
	}

	for (; c >= 1; c /= 10)
	{
		_putchar(((m / c) % 10) + '0');
	}
}
