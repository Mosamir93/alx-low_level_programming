#include <stdio.h>
#include "search_algos.h"

/**
 * _binary_search - performs binary search algorithm on an array
 * @array: array to be searched
 * @low: the starting index for the search
 * @high: the ending index of the search
 * @value: value being searched for
 * Return: the index of the value in the array
 * or -1 if not found
*/

int _binary_search(int *array, size_t low, size_t high, int value)
{
	size_t mid, i;

	while (low <= high)
	{
		mid = (low + high) / 2;
		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			if (i != low)
				printf(", ");
			printf("%d", array[i]);
		}
		printf("\n");
		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			low = mid + 1;
		else if (array[mid] > value)
			high = mid - 1;
	}
	return (-1);
}

/**
 * exponential_search - searches for a value in a sorted array
 * of integers using the Exponential search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: first index where value is located or
 * -1 If value is not present in array or if array is NULL
*/

int exponential_search(int *array, size_t size, int value)
{
	size_t i, low, high;

	if (!array || size == 0)
		return (-1);
	if (array[0] == value)
		return (0);
	for (i = 1; i < size && array[i] < value; i *= 2)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	low = i / 2;
	high = i < size - 1 ? i : size - 1;
	printf("Value found between indexes [%lu] and [%lu]\n", low, high);
	return (_binary_search(array, low, high, value));
}
