#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - 2 dimensional array of integers.
 * @width: integer
 * @height: integer
 * Return: Return NULL if width or height is 0 or negative
 */
int **alloc_grid(int width, int height)
{
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	int **grid = malloc(height * sizeof(int *));

	if (grid == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
	grid[i] = calloc(width, sizeof(int));
	if (grid[i] == NULL)
	{
		for (j = 0; j < i; j++)
		{
			free(grid[j]);
		}
		free(grid);
		return (NULL);
	}
	}
	return (grid);
}
