#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - Returns a pointer to a 2D array of integers initialized to 0.
 * @width: Width of the grid.
 * @height: Height of the grid.
 *
 * Return: Pointer to the 2D array, or NULL on failure or invalid size.
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int w;
	int h;

	if (width <= 0 || height <= 0)
		return (NULL);

	h = 0;
	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);

	while (h < height)
	{
		grid[h] = malloc(width * sizeof(int));
		if (grid[h] == NULL)
		{
			while (h-- > 0)
				free(grid[h]);
			free(grid);
			return (NULL);
		}
		w = 0;
		while (w < width)
		{
			grid[h][w] = 0;
			w++;
		}
		h++;
	}
	return (grid);
}
