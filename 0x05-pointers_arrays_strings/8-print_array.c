#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints n elements for an array
 * of integers
 * @a: array
 * @n: n element
 * Return: Void
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%i", (*a + i));
		if (i != (n - 1))
			printf(", ");
	}
	printf("\n");
}
