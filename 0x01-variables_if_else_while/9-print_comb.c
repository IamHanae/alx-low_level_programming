#include <stdio.h>

/**
 * main - Entry point into the program
 *
 * Return: 0 on success. Error otherwise
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
		putchar(i + 48);
		while (i <= 8)
		{
			putchar(',');
			putchar(' ');
		}
	putchar('\n');
	return (0);
}
