#include <stdio.h>

/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
	long int n, m;

	n = 612852475143;

	for (m = 2; m <= n; m++)
	{
		if (n % m == 0)
		{
			n = n / m;
			m--;
		}
	}
	printf("%lu\n", m);
	return (0);
}
