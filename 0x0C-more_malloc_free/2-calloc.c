#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array, using malloc.
 * @nmemb: The memory needed.
 * @size: Size in bytes.
 * Return: Pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *pointer;
	void *memo;

	if (nmemb == 0 || size == 0)
		return (NULL);
	memo = malloc(size * nmemb);

	if (memo == NULL)
		return (NULL);
	pointer = memo;

	for (i = 0; i < (size * nmemb); i++)
		pointer[i] = '\0';
	return (memo);
}
