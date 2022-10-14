#include <stdio.h>

/**
 * main - Entry point into the program
 *
 * Return: 0 on success. Error otherwise
 */
int main(void)
{
	int i;

	for (i = 0; i <= 25; i++)
	{
		putchar('z' - i);
	}
	putchar('\n');
	return (0);
}
