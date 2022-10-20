#include <stdio.h>

/**
* main - causes an infinite loop
* Return: 0
*/

int main(void)
{
	int i;

	printf("Infinite loop incoming :(\n");

	i = 0;

<<<<<<< HEAD
	/*while (i < 10)
	{
		putchar(i);
	}*/
=======
	while (i < 10)
	{
		putchar(i);
		i++;
	}
>>>>>>> 2c6661401d8cb6511aff92f4781de96253a64f73

	printf("Infinite loop avoided! \\o/\n");

	return (0);
}
