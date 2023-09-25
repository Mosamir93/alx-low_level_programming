#include "main.h"

/**
*_strspn - gets the length of a prefix substring
*@s: string to check
*@accept: string used to check
*Return: n the number of bytes found
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, n;

	n = 0;
	for (i = 0; s[i] != ',' || s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				n += 1;
		}
	}
	return (n);
}
