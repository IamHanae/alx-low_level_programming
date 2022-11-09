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
	int height_i, width_i;

	if (width <= 0 || height <= 0)
		return (NULL);

	twoDim = malloc(sizeof(int *) * height);

	if (twoDim == NULL)
		return (NULL);

	for (height_i = 0; height_i < height; height_i++)
	{
		twoDim[height_i] = malloc(sizeof(int) * width);

		if (twoDim[height_i] == NULL)
		{
			for (; height_i >= 0; height_i--)
				free(twoDim[height_i]);

			free(twoDim);
			return (NULL);
		}
	}

	for (height_i = 0; height_i < height; height_i++)
	{
		for (width_i = 0; width_i < width; width_i++)
			twoDim[height_i][width_i] = 0;
	}
	return (twoDim);
}
