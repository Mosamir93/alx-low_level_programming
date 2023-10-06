#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
*_realloc - reallocates a memory block using malloc and free
*@ptr: pointer to memory to be allocate
*@old_size: the size of original memory in bytes
*@new_size: the size of new memory in bytes
*Return: pointer to new memory allocated or NULL upon failure
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	void *ptr2;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size && ptr != NULL)
		return (ptr);
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		if (ptr == NULL)
			return (NULL);
		return (ptr);
	}
	ptr2 = malloc(new_size);
	if (ptr2 == NULL)
		return (NULL);
	for (i = 0; i < old_size && i < new_size; i++)
		((char *)ptr2)[i] = ((char *)ptr)[i];
	free(ptr);
	return (ptr2);
}
