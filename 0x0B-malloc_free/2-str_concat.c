#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *str_concat - concatenates two strings
 *@s1: first string
 *@s2: second string
 *Return: pointer to the new string or NULL if faile
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, len1, len2;
	char *s3;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	len1 = 0;
	for (i = 0; s1[i] != '\0'; i++)
		len1 += 1;
	len2 = 0;
	for (j = 0; s2[j] != '\0'; j++)
		len2 += 1;
	if (s1 == NULL)
	{
		s3 = (char *)malloc((len2 + 1) * sizeof(char));
		for (i = 0; i < len2; i++)
			s3[i] = s2[i];
	}
	else if (s2 == NULL)
	{
		s3 = (char *)malloc((len1 + 1) * sizeof(char));
		for (i = 0; i < len1; i++)
			s3[i] = s1[i];
	}
	else
	{
		s3 = (char *)malloc((len1 + len2 + 1) * sizeof(char));
		if (s3 == NULL)
			return (NULL);
		for (i = 0; i < (len1 + len2); i++)
		{
			if (i < len1)
				s3[i] = s1[i];
			else
				s3[i] = s2[i - len1];
		}
	}
	if (s3 == NULL)
		return (NULL);
	s3[i] = '\0';
	return (s3);
}
