#include <stdio.h>

/**
 * main - Entry point into the program
 *
 * Return: 0 on success. Error otherwise
 */
int main(void)
{
	int i = 122;

	while (i >= 97)
	{
		putchar('122' - 1);
		i--;
	}
	putchar('\n');
	return (0);
}
