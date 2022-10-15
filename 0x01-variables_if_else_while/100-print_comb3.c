#include <stdio.h>

/**
 * main - Entry point into the program
 *
 * Return: 0 on success
 */
int main(void)
{
	int i;
	int j = 0;

	for (i = 0; i <= 89; i++)
	{
		if ((i / 10) < (i % 10))
		{
			putchar((i / 10) + '0');
			putchar((i % 10) + '0');
			j = i;

			if (j == i)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
