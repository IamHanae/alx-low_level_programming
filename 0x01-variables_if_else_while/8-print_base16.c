#include <stdio.h>

/**
 * main - Entry level into the program
 *
 * Return: 0 on success. Otherwise error
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
		putchar(i + 48);
	for (i = 0; i <= 5; i++)
		putchar(i + 'a');
	putchar('\n');
	return (0);
}
