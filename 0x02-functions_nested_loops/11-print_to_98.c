#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Prints all the natural numbers from n to 98
 * @n: The number to check
 *
 * Return: Void
 */
void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i < 98; i++)
		{
			printf("%i, ", i);
		}
	}
	else
	{
		for (i = n; i > 98; i--)
		{
			printf("%i, ", i);
		}
	}
	printf("%i\n", 98);
}
