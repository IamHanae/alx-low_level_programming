#include "main.h"

/**
 * times_table - Prints the 9 times table
 *
 * Return: Nothing
 */
void times_table(void)
{
	int i, j, n, m;

	for (i = 0; i < 10; i++)
	{
		_putchar('0');

		for (j = 1; j < 10; j++)
		{
			_putchar(',');
			_putchar(' ');

			n = (i * j) / 10;
			m = (i * j) % 10;

			if ((i * j) < 10)
				_putchar(' ');
			else
				_putchar(n + '0');

			_putchar(m + '0');

			if (j == 9)
				continue;
		}
		_putchar('\n');
	}
}
