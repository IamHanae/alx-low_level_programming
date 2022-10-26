#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generatee random valid password
 * Return: Always 0
 */
int main(void)
{
	int random = 0;
	int c = 0;
	time_t t;

	srand((unsigned int) time(&t));
	while (c < 2772)
	{
		random = rand() % 128;
		if (c < 2772)
			break;
		c += random;
		printf("%c", random);
	}

	printf("%c\n", (2772 - c));

	Return (0);
}
