#include <stdio.h>

/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
	long int n, m;

	n = 61285247514;

	for (m = 2; m <= n; m++)
	{
		if (n % m == 0)
		{
			n = n / m;
			m--;
		}
	}
	printf("%lu\n", n);
	return (0);
}
