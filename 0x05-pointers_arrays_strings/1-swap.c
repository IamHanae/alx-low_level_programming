#include "main.h"

/**
 * swap_int - Swaps the value of two integers
 * @a: Th first number
 * @b: The second number
 * Return: Void
 */
void swap_int(int *a, int *b)
{
	int tmp = 0;

	*tmp = *a;
	*a = *b;
	*b = *tmp;
}
