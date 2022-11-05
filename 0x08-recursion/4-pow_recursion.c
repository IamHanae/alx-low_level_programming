#include "main.h"

/**
 * _pow_rescursion - Returns the value of x raised
 * to the power of y.
 * @x: The raised number.
 * @y: The power.
 * Return: The value of x raised to the power of y.
 */
int _pow_recursion(int x, int y)
{
	int res = x;

	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);

	res *= _pow_recursion(x, y - 1);

	return (res);
}
