#include <stdio.h>
#include "main.h"

/**
 * print_times_table - Prints the n times table, starting with 0
 * @n: the number to check
 *
 * Return: void
 */
void print_times_table(int n)
{
	int i, j;

	if (n > 15 || n < 0)
		return;
	_putchar('0');

	for (i = 0; i <= n; i++)
	{
		_putchar(',');
		_putchar(' ');

		for (j = 0; j <= n; j++)
		{
			printf("%i", i * j);
		}
	_putchar('\n');
	}

}
