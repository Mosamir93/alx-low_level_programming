#include "main.h"

/**
 *_strncat - appends the src string to the dest string
 *@dest: string to attach to
 *@src: strig to be attached
 *@n: nimber of characters to be appended
 *Return: dest which is a pointer to the resulting string
 */

char *_strncat(char *dest, char *src, int n)
{
	int len1, i;

	len1 = 0;
	while (dest[len1] != '\0')
	{
		len1++;
	}


	for (i = 0; i <= n; i++)
	{
		dest[len1 + i] = src[i];
	}
	return (dest);
}
