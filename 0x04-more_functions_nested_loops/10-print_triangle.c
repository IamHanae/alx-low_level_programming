#include "main.h"

/**
 * print_triangle - Prints a triangle
 * @size: Size of the triangle
 * Return: Void
 */
void print_triangle(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = i; j < size; j++)
			{
				_putchar(' ');
			}
			for (j = 1; j <= i; j++)
			{
				_putchar('#');
			}
			if (i != size)
				_putchar('\n');
		}
	}
	_putchar('\n');
}
