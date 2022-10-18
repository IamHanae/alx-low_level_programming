#include "main.h"

/**
 * print_alphabet - print alphabets on lowercase
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	int i;

	char s[26] = "abcdefghijklmnopqrstuvwxyz";
	for (i = 0; i < 26; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
