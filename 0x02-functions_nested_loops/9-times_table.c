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
		for (j = 0; j < 10; j++)
		{
			n = (i * j) / 10;
			m = (i * j) % 10;

			if (i == 0)
				_putchar('0');

			if ((i * j) < 10)
			{
				_putchar(' ');
				_putchar(m + '0');
			}
			else
			{
				_putchar(n + '0');
				_putchar(m + '0');
			}
			if (j == 9)
				continue;

			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
