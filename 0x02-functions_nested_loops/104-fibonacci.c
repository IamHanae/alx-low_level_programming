#include <stdio.h>

/**
 * main - Entry point into the program
 *
 * Return: Always 0
 */
int main(void)
{
	int i;
	long int n1 = 1, n2 = 2, m1, m2, n11, n22;
	int bool1 = 1;

	printf("%ld, %ld", n1, n2);
	for (i = 0; i < 96; i++)
	{
		if (bool1)
		{
			m1 = n1 + n2;
			printf(", %ld", m1);
			n1 = n2;
			n2 = m1;
		}
		else
		{
			n11 = n1 % 1000000000;
			n22 = n2 % 1000000000;
			n1 = n1 / 1000000000;
			n2 = n2 / 1000000000;
			bool1 = 0;

			m2 = (n11 + n22);
			m1 = n1 + n2 + (m2 / 1000000000);
			printf(", %ld", m1);
			printf("%ld", m2 % 1000000000);
			n1 = n2;
			n11 = n22;
			n2 = m1;
			n22 = (m2 % 1000000000);
		}
		if ((n1 + n2) < 0 && bool1 == 1)
			bool1 = 0;
	}
	printf("\n");
	return (0);
}
