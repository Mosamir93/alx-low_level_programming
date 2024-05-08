#include <stdio.h>
#include "search_algos.h"

/**
 * recursive - performs binary search algorithm to find
 * the first element in the array that matches recursively
 * @array: array to be searched
 * @low: the starting index for the search
 * @high: the ending index of the search
 * @value: value being searched for
 * Return: the index of the value in the array
 * or -1 if not found
*/

int recursive(int *array, size_t low, size_t high, int value)
{
	size_t mid, i;

	if (low <= high)
	{
		mid = (low + high) / 2;

		printf("Searching in array: ");

		for (i = low; i < high; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		if (array[low] == value && array[mid] == value)
			return (low);
		if (array[mid] == value)
			return (recursive(array, low, mid, value));

		else if (array[mid] < value)
			return (recursive(array, mid + 1, high, value));

		else if (array[mid] > value)
			return (recursive(array, low, mid - 1, value));
	}
	return (-1);
}

/**
 * advanced_binary - searches for a value in a sorted array
 * of integers
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: first index where value is located or
 * -1 If value is not present in array or if array is NULL
*/

int advanced_binary(int *array, size_t size, int value)
{
	if (!array || size == 0)
		return (-1);

	return (recursive(array, 0, size - 1, value));
}
