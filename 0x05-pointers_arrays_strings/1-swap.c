#include "main.h"

/**
 * swap_int - Swaps the value of two integers
 * @a: Th first number
 * @b: The second number
 * Return: Void
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = &a;
	*a = &b;
	*b = temp;
}
