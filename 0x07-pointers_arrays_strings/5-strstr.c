#include "main.h"

/**
*_strstr - locates a substring
*@haystack: string to be searched
*@needle: substring to be located
*Return: haystack + i pointer to the beginning of the located substring
*/

char *_strstr(char *haystack, char *needle)
{
	int i, j, k;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			for (k = 0; haystack[i + k] == needle[j + k]; k++)
			{
				if (needle[k] == '\0' || haystack[i + k] == '\0')
					return (&haystack[i]);
			}
		}
	}
	return ('\0');
}
