#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
*array_range - creates an array of integers
*@min: first number in the array
*@max: last number in the array
*Return: pointer to the array or NULL upon failure or if min > max
*/

int *array_range(int min, int max)
{
	int i;
	int *ptr;

	if (min > max)
		return (NULL);
	ptr = malloc(((max - min) + 1) * sizeof(int));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; min <= max; i++, min++)
		ptr[i] = min;
	return (ptr);
}
