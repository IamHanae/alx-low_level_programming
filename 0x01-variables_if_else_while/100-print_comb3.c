#include <stdio.h>

/**
 * main - Entry point into the program
 *
 * Return: 0 on success. Error otherwise
 */
int main(void)
{
	int i;
	
	for(i = 1; i <= 89; i++)
	{
		if ((i/10) < (i%10))
		{
		putchar((i/10) + '0');
		putchar((i%10) + '0');
		}
		if (i <= 88)
		{
			putchar(',');
			putchar(' ');
		}
	}	
	putchar('\n');

	return (0);
}
