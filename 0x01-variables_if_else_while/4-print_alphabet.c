#include <stdio.h>

/**
 * main - Entry point into the program
 *
 * Return: 0 on success. Error otherwise
 */
int main(void)
{
	int i;
	char s[] = "abcdfghijklmnoprstuvwxyz\n";

	for (i = 0; i <= 24; i++)
		putchar(s[i]);
	return (0);
}
