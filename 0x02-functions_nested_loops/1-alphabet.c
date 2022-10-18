#include "main.h"

/**
 * main - Entry point into the program
 *
 * Return: Always 0.
 */
int main(void)
{
	print_alphabet();
	return (0);
}

void print_alphabet(void)
{
	int ;

	char s[26] = "abcdefghijklmnopqrstuvwxyz";
	for (i = 0; i < 26; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
