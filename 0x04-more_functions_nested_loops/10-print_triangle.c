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
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar(' ');
			}
			for (j = 0; j <= i; j++)
			{
				_putchar('#');
			}
			if(i != size - 1)
				_putchar('\n');
		}
	}
	_putchar('\n');
}
