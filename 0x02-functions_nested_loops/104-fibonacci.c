#include <stdio.h>

/**
 * main - Entry point into the program
 *
 * Return: Always 0
 */
int main(void)
{
	int i;
	unsigned long n1 = 1, n2 = 2, n3;
	unsigned long n1_1, n1_2, n2_1, n2_2;

	printf("%lu", n1);

	for (i = 0; i < 91; i++)
	{
		n3 = n1 + n2;
		printf(", %lu", n2);

		n2 += n1;
		n1 = n2 - n1;
	}

	n1_1 = n1 / 10000000000;
	n1_2 = n1 % 10000000000;
	n2_1 = n2 / 10000000000;
	n2_2 = n2 % 10000000000;

	for (i = 92; i < 99; i++)
	{
		printf(", %lu", n2_1 (n2_2 / 1000000000));
		printf("%lu", n2 % 1000000000);

		n2_1 += n1;
		n1_1 = n2_1 - n1_1;
		n2_2 += n1_2;
		n1_2 = n2_2 - n1_2;
	}
	printf("\n");
	return (0);
}
