#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
*_rows - calculates number of words in a string
*@str: string to calculate it's words
*Return: the words in a string
*/

int _rows(char *str)
{
	int i, r;

	r = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ' && str[i - 1] != ' ' && i != 0)
			r += 1;
	}
	return (r);
}

/**
*_columns - counts the length of each word
*@str: string used
*Return: number of letters in each word
*/

int _columns(char *str)
{
	int i, columns;
	static int l;

	columns = 0;
	for (i = l; str[l] != '\0'; i++)
	{
		if (str[i] != ' ')
			columns += 1;
		l++;
		if (str[i] == ' ' && str[i - 1] != ' ')
			break;
	}
	return (columns);
}

/**
*strtow - splits a string into words
*@str: string to be split
*Return: pointer to an array of strings or NULL for failure
*/

char **strtow(char *str)
{
	int i, j, k, rows, columns;
	char **s;

	if (str == NULL || str[0] == '\0')
		return (NULL);
	rows = _rows(str);
	s = (char **)malloc(rows * sizeof(char *));
	if (s == NULL)
		return (NULL);
	k = 0;
	for (i = 0; i < rows; i++)
	{
		columns = 0;
		columns = _columns(str);
		s[i] = (char *)malloc((columns + 1) * sizeof(char));
		if (s[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(s[i]);
			free(s);
			return (NULL);
		}
	}
	k = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; str[k] != '\0'; j++)
		{
			if (str[k] != ' ')
				s[i][j] = str[k];
			k++;
			if (str[k] == ' ' && str[k - 1] != ' ')
				break;
		}
		s[i][j] = '\0';
	}
	return (s);
}
