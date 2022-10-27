#include "main.h"

/**
 * reverse_array - Reverse the content of an array
 * of integers
 * @a: Array
 * @n: Number of elements of the array
 * Return: Void
 */
void reverse_array(int *a, int n)
{
	int tmp, i;

	for (i = n - 1; i >= n / 2; i--)
	{
		tmp = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = tmp;
	}
}
