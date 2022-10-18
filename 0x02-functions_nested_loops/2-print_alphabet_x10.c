#include "main.h"

/**
 * print_alphabet_x10 - Prints 10 times the alphabet
 *
 * Return: Void
 */
void print_alphabet_x10(void)
{
	int i;
	int count = 0;
	char s[26] = "abcdefghijklmnopqrstuvwxyz";

	while (count < 10)
	{
		for (i = 0; i < 26; i++)
		{
			_putchar(s[i]);
		}
		_putchar('\n');
		count++;
	}
	
}
