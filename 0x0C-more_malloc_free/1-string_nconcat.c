#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
*string_nconcat - concatenates two strings
*@s1: first string
*@s2: second string
*@n: number of elements to use from the second string
*Return: pointer to the new concatenated string
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, k, len1, len2;
	char *s3;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = len2 = 0;
	for (i = 0; s1[i] != '\0'; i++)
		len1 += 1;
	for (j = 0; s2[j] != '\0'; j++)
		len2 += 1;
	if (len2 >= n)
		s3 = malloc(sizeof(char) * (len1 + n + 1));
	if (len2 < n)
		s3 = malloc(sizeof(char) * (len1 + len2 + 1));
	if (s3 == NULL)
		return (NULL);
	for (k = 0; k < (len1 + n) && k < (len1 + len2); k++)
	{
		if (k < len1)
			s3[k] = s1[k];
		else
			s3[k] = s2[k - len1];
	}
	s3[k] = '\0';
	return (s3);
}
