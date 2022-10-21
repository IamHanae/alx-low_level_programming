#include "main.h"
#include <stdio.h>

/**
 * main - Entry point into the program
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;

	for (i = 1; i < 101; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");
		else if (i % 5 == 0)
			printf("Buzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else
			printf("%i", i);
		if (i != 100)
			_putchar(' ');
	}
	_putchar('\n');
	return (0);
}
