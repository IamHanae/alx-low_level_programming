#include <stdio.h>

/**
 * main - Entry point into the program
 *
 * Return: 0 if success. error otherwise
 */
int main(void)
{
	int i;
	char s[] = "abcdefghijklmnopqrstuvwxyz\n";

	for (i = 0; i <= 26; i++)
		putchar(s[i]);
	return (0);
}
