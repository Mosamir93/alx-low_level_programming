#include "main.h"

/**
*_memcpy - copies memory area
*@dest: destination memory area
*@src: memory area to copy from
*@n: number of bytes to be copied
*Return: dest pointer to the new memory area
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
