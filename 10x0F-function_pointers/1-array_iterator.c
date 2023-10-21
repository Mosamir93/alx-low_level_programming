#include "function_pointers.h"
#include <stdlib.h>

/**
*array_iterator -  executes a function on each element of an array
*@array: array to be used
*@size: size of the array
*@action: function pointer
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action && array && size)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
