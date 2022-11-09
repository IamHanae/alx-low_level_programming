#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Returns a pointer to a 2
 * dimensional array of integers
 * @width: The width of the array.
 * @height: The height of the array.
 * Return : On failure - NULL
 * Otherwise - A pointer to the array.
 */
int **alloc_grid(int width, int height)
{
	int **twoDim;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	twoDim = malloc(sizeof(int) * height);

	if (twoDim == NULL)
	{
		free(twoDim);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		twoDim[i] = malloc(sizeof(int) * width);

		if (twoDim[i] == NULL)
		{
			free(twoDim);
			return (NULL);
		}

		for (j = 0; j < width; j++)
			twoDim[i][j] = 0;
	}

	return (twoDim);
}
