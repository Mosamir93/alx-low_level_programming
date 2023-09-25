#include "main.h"
#include <stdio.h>

/**
 *print_diagsums - prints the sum of the two diagonals of a square matrix
 *@a: the matrix used
 *@size: size of a row
 */

void print_diagsums(int *a, int size)
{
	int i, j, sum1, sum2;

	sum1 = 0;
	for (i = 0; i < size; i++)
	{
		sum1 += a[i];
		a += size;
	}
	printf("%d ,", sum1);

	sum2 = 0;

	for (j = size - 1; j >= 0; j--)
	{
		sum2 += a[j];
		a += size;
	}
	printf("%d", sum2);
}
