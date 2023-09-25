#include "main.h"

/**
 *_strstr - locates a substring
 *@haystack: string to be searched
 *@needle: substring to be located
 *Return: haystack + i pointer to the beginning of the located substring
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; haystack[i + j] == needle[j]; j++)
		{
		}
		if (haystack[i + j] == needle[j])
			return (&haystack[i]);
	}
	return ('\0');
}
