#include "main.h"
#include <stdlib.h>

/**
 * _realloc - Reallocates a memory block using malloc and free.
 * @ptr: Pointer to the reallocated memory.
 * @old_size: Size in bytes of allocated memory.
 * @new_size: Newsize of memory block.
 * Return: Void pointer to the new allocation.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	unsigned int i;

	if (ptr == NULL)
	{
		p = malloc(new_size);
		return (p);
	}
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (old_size == new_size)
		return (ptr);
	p = malloc(new_size);
	if (p == NULL)
		return (NULL);

	for (i = 0; i < old_size && i < new_size; i++)
		p[i] = ((char *)ptr)[i];
	free(ptr);
	return (p);
}
