#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
*free_grid - frees a 2d grid previously created by alloc_grid function
*@grid: 2d array to be freed
*@height: number of rows
*/

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
