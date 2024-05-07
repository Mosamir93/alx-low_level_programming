#include <stdio.h>
#include "search_algos.h"

/**
 * print_array - print the segment of the array
 * being searched currently
 * @array: a pointer to the first element of the array to search in
 * @low: the begginning of the segment
 * @high: the end of the segment
*/

void print_array(int *array, size_t low, size_t high)
{
	size_t i;

	printf("Searching in array: %d", array[low]);
	for (i = low + 1; i <= high; i++)
		printf(", %d", array[i]);
	printf("\n");
}

/**
 * binary_search -  searches for a value in a sorted
 * array of integers using the Binary search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: index where value is located or -1
 * If value is not present in array or if array is NULL
*/

int binary_search(int *array, size_t size, int value)
{
	size_t low, high, mid;

	low = 0;
	high = size - 1;
	if (!array || size == 0)
		return (-1);
	while (low <= high)
	{
		print_array(array, low, high);
		mid = (low + high) / 2;
		if (array[mid] < value)
			low = mid + 1;
		else if (array[mid] > value)
			high = mid - 1;
		else
			return (mid);
	}
	return (-1);
}
