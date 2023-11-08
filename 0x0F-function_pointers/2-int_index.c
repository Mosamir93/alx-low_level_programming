#include "function_pointers.h"
#include <stdlib.h>

/**
*int_index - searches for an integer
*@array: array to be searched
*@size: size of the array
*@cmp: function pointer
*Return: index of first true element or -1 on failure
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (cmp && array)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);

		}
	}
	return (-1);
}
