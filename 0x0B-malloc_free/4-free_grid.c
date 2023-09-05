#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - Frees the 2nd array
 * @grid: 2nd grid
 * @height: Height dimension of the grid
 * Description: Frees memory of the grid
 * Return: Nothing
 *
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
