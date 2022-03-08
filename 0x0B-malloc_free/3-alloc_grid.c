#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: width of the array.
 * @height: height of the array.
 * Return: pointer or NULLL
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int x, y;

	if (width < 1 || height < 1)
		return (0);

	grid = malloc(height * sizeof(int *));
	if (grid == 0)
	{
		free(grid);
		return (0);
	}

	for (x = 0; x < height; x++)
	{
		grid[x] = malloc(width * sizeof(int));
		if (grid[x] == 0)
		{
			for (x--; x >= 0; x--)
				free(grid[x]);
			free(grid);
			return (0);
		}
		for (y = 0; y < width; y++)
			grid[x][y] = 0;
	}
	return (grid);
}
