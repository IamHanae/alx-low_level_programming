#include <stdio.h>

/**
 * main - Entry point into the program
 *
 * Return: Always 0
 */
int main(void)
{
	int i;
	int n1 = 0;
	int n2 = 1;
	int n3;

	for (i = 0; i < 50; i++)
	{
		if (i <= 1)
			n3 = i;
		else
		{
		n3 = n1 + n2;
		n1 = n2;
		n2 = n3;
		}
		printf("%d\n", n3);
	}
	return (0);
}
