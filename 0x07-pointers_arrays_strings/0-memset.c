#include "main.h"

/**
*_memset - fills memory with a constant byte
*@s: memory area pointer
*@b: the constant byte used
*@n: number of bytes to be filled
*Return: s pointer to the memory area
*/

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
