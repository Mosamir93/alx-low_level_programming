#include <stdlib.h>
#include "main.h"

void _r_alloc(char **ar, char *s, int start, int end, int r_num);

/**
 *_columns - determines the start and end of each word
 *@ar: the array of arrays to be returned
 *@s: the string to extracts words from
 */

void _columns(char **ar, char *s)
{
	int i, start, r_num, flag;

	start = r_num = flag = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (flag == 0 && s[i] != ' ')
		{
			flag = 1;
			start = i;
		}
		if (s[i] == ' ' && s[i - 1] != ' ' && i != 0)
		{
			flag = 0;
			_r_alloc(ar, s, start, i, r_num);
			r_num += 1;
		}
	}
	if (flag == 1)
		_r_alloc(ar, s, start, i, r_num);
}

/**
 *_r_alloc - allocates memory to each word and copies the relevent word
 *@ar: the array of array to allocate it's rows
 *@s: string to copy words from
 *@start: the starting point of the word in the string
 *@end: the ending point of the word
 *@r_num: the row number to allocate to
 */

void _r_alloc(char **ar, char *s, int start, int end, int r_num)
{
	int i, size;

	size = end - start;
	ar[r_num] = (char *)malloc((size + 1) * sizeof(char));
	for (i = 0; start < end; i++, start++)
		ar[r_num][i] = s[start];
	ar[r_num][i] = '\0';
}

/**
 *strtow - splits a string into words
 *@str: string to get words from
 *Return: pointer to the array of strings or null on failure
 */

char **strtow(char *str)
{
	int i, rows, add;
	char **ar;

	if (str == NULL || str[0] == '\0' || (str[0] == ' ' && str[1] == '\0'))
		return (NULL);
	rows = add = 0;
	for (i = 0; str[i]; i++)
	{
		if (str[i] != ' ' && add == 0)
			add = 1;
		if (str[i] == ' ' && str[i - 1] != ' ' && i != 0)
		{
			add = 0;
			rows += 1;
		}
	}
	rows += add;
	if (rows == 0)
		return (NULL);
	ar = (char **)malloc((rows + 1) * sizeof(char *));
	if (ar == NULL)
		return (NULL);
	_columns(ar, str);
	ar[rows] = '\0';
	return (ar);
}
