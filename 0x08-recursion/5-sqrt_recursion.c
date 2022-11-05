#include "main.h"

/**
 * _sqrt_recursion - Return the natural square root
 * of a number
 * @n: The number to calculate the square root of.
 * Return: The natural square root of n.
 */
int _sqrt_recursion(int n)
{
	int root = 1;
	unsigned m = n;

	if (n < 0)
		return (-1);
	else if (n == 1)
		return (1);
	else
	{
		while (root < n)
		{
			m = (m + root) >> 1;
			root = n / m;
		}
		return (m);	
	}
}
