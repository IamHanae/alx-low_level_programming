#include <stdio.h>

/**
 * main - Prints the number of arguments passed.
 * @argc: The number of arguments.
 * @argv: An array of pointers to the arguments.
 * Return: Always 0.
 */
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%i\n", argc - 1);
	return (0);
}
