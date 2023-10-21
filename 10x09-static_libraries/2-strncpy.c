#include "main.h"

/**
 *_strncpy - appends the src string to the dest string
 *@dest: new string created
 *@src: string to be copied
 *@n: nimber of characters to be appended
 *Return: dest which is a pointer to the resulting string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;


	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
