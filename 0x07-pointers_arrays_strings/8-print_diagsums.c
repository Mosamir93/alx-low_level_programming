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

	sum1 = 0;
	for (i = 0; i < size; i++)
	{
		sum1 += a[i][i];
	}
	printf("%d ,", sum1);

	sum 2 = k = 0;

	for (j = size - 1; j >= 0; j--)
	{
		sum 2 += a[k][j];
		k++;
	}
	printf("%d", sum2);
}