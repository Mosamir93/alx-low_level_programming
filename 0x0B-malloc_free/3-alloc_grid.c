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
	ar = (int **)malloc(height * sizeof(int *));
	if (ar == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		ar[i] = (int *)malloc(width * sizeof(int));
		if (ar[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(ar[i]);
			free(ar);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (k = 0; k < width; k++)
			ar[i][k] = 0;
	}
	return (ar);
}
