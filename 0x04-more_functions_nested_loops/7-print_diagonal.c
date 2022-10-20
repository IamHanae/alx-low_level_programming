#include "main.h"

/**
 * print_diagonal - Draws a diagonal line on the terminal
 * @n: The number of times the character \ should be printed
 * Return: Void
 */
void print_diagonal(int n)
{
	if (n > 0)
	{
		_putchar(' ');
		_putchar('_');
	}
	_putchar('\n');
}
