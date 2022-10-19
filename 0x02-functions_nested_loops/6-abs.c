#include "main.h"

/**
 * _abs - Compute the absolute value of an integer
 * @n: Th number to be checked
 *
 * Return: Return the absolute value
 */
int _abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}
