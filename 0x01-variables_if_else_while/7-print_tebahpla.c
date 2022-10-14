#include <stdio.h>

/**
 * main - Entry point into the program
 *
 * Return: 0 on success. Error otherwise
 */
int main(void)
{
	int i;

	for (i = 122; i <= 97; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
