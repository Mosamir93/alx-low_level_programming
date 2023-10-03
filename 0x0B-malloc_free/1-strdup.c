#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
*_strdup - duplicates a string
*@str: string to be duplicated
*Return: pointer of the duplicated string or NULL for failure
*/

char *_strdup(char *str)
{
	unsigned int i, len;
	char *s;

	if (str == NULL)
		return (NULL);
	len = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		len += 1;
	}
	s = (char *)malloc(len * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
		s[i] = str[i];
	return (s);
}
