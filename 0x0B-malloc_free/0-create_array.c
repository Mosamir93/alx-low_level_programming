#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *create_array - creates an array of chars and initializes it with a char
 *@size: size of the array
 *@c: character to initialize the array with
 *Return: pointer to the array or NULL if size is zero or failure of malloc
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	s = (char *)malloc(size * sizeof(char));
	if (s == NULL || size == 0)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}
	return (s);
}
