#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_search -  searches for a value in a sorted array of integers
 * using the Jump search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: first index where value is located or
 * -1 If value is not present in array or if array is NULL
*/

int jump_search(int *array, size_t size, int value)
{
	size_t jump, before;

	if (!array || size == 0)
		return (-1);
	jump = sqrt(size);
	before = 0;
	while (array[before] < value && before < size)
	{
		printf("Value checked array[%lu] = [%d]\n", before, array[before]);
		before += jump;
	}
	before -= jump;
	printf("Value found between indexes [%lu] and [%lu]\n",
			before, before + jump);
	while (array[before] <= value && before < size)
	{
		printf("Value checked array[%lu] = [%d]\n", before, array[before]);
		if (array[before] == value)
			return (before);
		before++;
	}
	return (-1);
}
