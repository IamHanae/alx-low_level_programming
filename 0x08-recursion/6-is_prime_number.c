#include "main.h"

/**
 * isDivisible - Check if the number is divisble.
 * @n: The number to check.
 * @div: The divisor.
 * Return: If divisble 0. Otherwise 1.
 */
int isDivisible(int n, int div)
{
	if (n % div == 0)
		return (0);
	if (div == n / 2)
		return (1);
	return (isDivisble(n, div + 1));
}

/**
 * is_prime_number - Check of the he number is a prime.
 * @n: The number to check.
 * Return: If prime 1. Otherwise 0.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	if (n >= 2 && n <= 3)
		return (1);
	return (isDivisble(n, 2);
}
