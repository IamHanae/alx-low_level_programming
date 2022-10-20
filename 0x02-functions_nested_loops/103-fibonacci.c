#include <stdio.h>

/**
 * main - Entry point into the program
 *
 * Result: Always 0
 */
int main(void)
{
	int i;
	unsigned long n1, n2, n3;
	float total;

	while (1)
	{
		n3 = n1 + n2;
		if (n3 > 4000000)
			break;
		if((n3 % 2) == 0)
			total += n3;
		n1 = n2;
		n2 = n3;
	}
	printf("%.0f\n", total);

	return (0);
}
