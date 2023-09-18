#include "main.h"

/**
**_strcpy - copies string pointed to by src to buffer pointed to by dest
*@dest: buffer to be copied to
*@src: string to be copied
*Return: pointer to dest
*/

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = -1; src[i] != '\0'; i++)
	{
		src[i] = dest[i];
	}
	return (dest);
}
