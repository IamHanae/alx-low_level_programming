#include "main.h"

/**
 * _sqrt - finds the natural square root.
 * @n: The number
 * @root: The root
 * Return: The square root.
 */
int _sqrt(int n, int root)
{
	int next = root + 1;

	if (root * root == n)
		return (root);
	if (root == n / 2)
		return (-1);
	else
		return (_sqrt(n, next));
}

/**
 * _sqrt_recursion - Return the natural square root
 * of a number
 * @n: The number to calculate the square root of.
 * Return: The natural square root of n.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 1)
		return (1);
	return (_sqrt(n, 1));
}
