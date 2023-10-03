#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
*alloc_grid - returns a pointer to a 2 dimensional array of integers
*@width: columns of the 2d array
*@height: rows of the 2d array
*Returns: pointer to 2d array or NULL for failure
*/

int **alloc_grid(int width, int height)
{
	int i, k;
	int **ar;

	if (width <= 0 || height <= 0)
		return (NULL);
	ar = (int **)malloc((width * height) * sizeof(int));
	if (ar == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		for (k = 0; k < width; k++)
			ar[i][k] = 0;
	}
	return (ar);
}
