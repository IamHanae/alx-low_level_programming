#include <stdio.h>

/**
 * main - Entry point into the program
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned long n1 = 0, n2 = 1, n3;
	float total;

	while (1)
	{
		n3 = n1 + n2;
		if (n3 > 4000000)
			break;

		if ((n3 % 2) == 0)
			total += n3;
		n1 = n2;
		n2 = n3;
	}
	printf("%.0f\n", total);

	return (0);
}
