#include "main.h"

/**
 *_strcat - appends the src string to the dest string
 *@dest: string to attach to
 *@src: strig to be attached
 *Return: dest which is a pointer to the resulting string
 */

char *_strcat(char *dest, char *src)
{
	unsigned int len1 = 0, len2 = 0;
	int i;

	while (dest[len1] != '\0')
	{
		len1++;
	}

	while (src[len2] != '\0')
	{
		len2++;
	}

	for (i = 0; i <= len2; i++)
	{
		dest[len1 + i] = src[i];
	}
	return (dest);
}
