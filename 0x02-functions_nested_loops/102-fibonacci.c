#include <stdio.h>

/**
 * main - Entry point into the program
 *
 * Return: Always 0
 */
int main(void)
{
	int i;
	int n1 = 1;
	int n2 = 2;
	int n3;

	for (i = 0; i < 50; i++)
	{
		n3 = n1 + n2;
		printf("%i, ", n3);
		n1 = n2;
		n2 = n3;
	}
	return (0);
}
