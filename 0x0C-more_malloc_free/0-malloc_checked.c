#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
*malloc_checked - allocates memory using malloc
*@b: size of memory allocated
*Return: ptr a void pointer to the allocated memory or exit 98 if failed
*/

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
