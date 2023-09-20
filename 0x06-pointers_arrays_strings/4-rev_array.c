#include "main.h"

/**
 *reverse_array - reverses the content of an array of integers
 *@a: array to be reversed
 *@n: number of elements in array
 */

void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n / 2; i++)
	{
		a[i] = temp;
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}
