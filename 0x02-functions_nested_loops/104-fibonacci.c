#include <stdio.h>

/**
 * main - Entry point into the program
 *
 * Return: Always 0
 */
int main(void)
{
	int i;
	unsigned long int n1 = 1, n2 = 2, n3;

	for (i = 1; i <= 98; i++)
	{
		if (i == 98)
			printf("%lu, ", n2);
		else
		{
			printf("%lu, ", n2);

			n3 = n2 + n1;
			n2 = n3;
		}
	}
	printf("\n");
	return (0);
}
