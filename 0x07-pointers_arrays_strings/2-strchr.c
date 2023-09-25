#include "main.h"

/**
*_strchr -  locates a character in a string
*@s: string to be searched
*@c: character being searched for
*Return: s + i or &s[i] pinter to the first occurence
*/

char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			break;
	}
	return (&s[i]);
}
