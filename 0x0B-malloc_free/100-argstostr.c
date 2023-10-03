#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *_strlen - calculates length of a string
 *@s: string to calculate it's length
 *Return: length of the string
 */

int _strlen(char *s)
{
	int i, len;

	len = 0;
	for (i = 0; s[i] != '\0'; i++)
		len += 1;
	return (len);
}

/**
 *argstostr - concatenates all the arguments of your program
 *@ac: number of arguments
 *@av: arguments vector
 *Return: pointer to the new string of concatenated arguments
 */

char *argstostr(int ac, char **av)
{
	int i, j, k, len;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);
	len = 0;
	for (i = 0; i < ac; i++)
		len += _strlen(av[i]) + 1;
	s = (char *)malloc(len * sizeof(char))
		if (s == NULL)
			return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			s[k] = av[i][j];
			k += 1;
		}
		s[k] = '\n';
		k += 1;
	}
	s[k] = '\0';
	return (s);
}
