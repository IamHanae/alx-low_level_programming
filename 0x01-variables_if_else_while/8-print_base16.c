#include <stdio.h>

/**
 * main - Entry level into the program
 *
 * Return: 0 on success. Otherwise error
 */
int main(void)
{
	int i;

	for (i = 0; i <= 10; i++)
		putchar(i + '48');
	for (i = 0; i <= 5; i++)
		putchar(i + '97');
	putchar('\n');
	return (0);
}
