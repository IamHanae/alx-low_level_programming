#include "main.h"

/**
 * factorial - Return the factorial of a number.
 * @n: The given number.
 * Return: The factorial of the given number.
 */
int factorial(int n)
{
	int res = n;

	if (n < 0)
		return (-1);
	else if (n >= 0 && n <= 1)
		return (1);

	res *= factorial(n - 1);

	return (res);
}
