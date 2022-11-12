#include "main.h"

/**
 * malloc_checked - Allocates memory using malloc.
 * @b: Unsigned int of the amount of memory.
 * Return: If failed - 98. Otherwise - A pointer to
 * the allocated memory.
 */
void *malloc_checked(unsigned int b)
{
	void *pointer;

	pointer =  malloc(b);
	if (pointer == NULL)
		exit(98);
	return (pointer);
}
