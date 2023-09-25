#include "main.h"
#include <stdio.h>

/**
 *print_diagsums - prints the sum of the two diagonals of a square matrix
 *@a: the matrix used
 *@size: size of a row
 */

void print_diagsums(int *a, int size)
{
	int i, j, k, sum1, sum2;

	sum1 = k = 0;
	for (i = 0; i < size; i++)
	{
		sum1 += a[i + k];
		k += size;
	}

	sum2 = k = 0;

	for (j = size - 1; j >= 0; j--)
	{
		sum2 += a[j + k];
		k += size;
	}
	printf("%d, %d\n", sum1, sum2);
}
