#include <stdio.h>

/**
 * main - Entry point into the program
 *
 * Return: Always 0
 */
int main(void)
{
	int i;
	unsigned long n1 = 0;
	unsigned long n2 = 1;
	unsigned long n3;

	for (i = 0; i < 50; i++)
	{
		n3 = n1 + n2;
		printf("%ld", n3);

		n1 = n2;
		n2 = n3;

		if (i == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
