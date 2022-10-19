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

	for (i = 0; i <= n; i++)
	{
		_putchar('0');

		for (j = 1; j <= n; j++)
		{
			printf(", ");
			printf("%i ,", i * j);
		}
		_putchar('\n');
	}

}
