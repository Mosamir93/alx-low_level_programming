#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
*_calloc - allocates memory for an array, using malloc
*@nmemb: number of elements in the array
*@size: size of each element
*Return: pointer to the allocated array or NULL upon failure
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	void *ptr;

	if (size == 0 || nmemb == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		((char *)ptr)[i] = 0;
	return (ptr);
}
