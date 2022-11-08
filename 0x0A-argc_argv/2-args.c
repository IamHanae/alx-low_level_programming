#include <stdio.h>

/**
 * main - Prints all the arguments it receives.
 * @argc: The numer of arguments.
 * @argv: An array of pointers to the arguments.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int arg;

	for (arg = 0; arg < argc; arg++)
		printf("%s\n",  argv[arg]);
	return (0);
}
