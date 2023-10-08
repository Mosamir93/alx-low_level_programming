#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
*_strlen - measures the length of string
*@s: string to be measured
*Return: length of the string
*/

int _strlen(char *s)
{
	int i = 0;

	for (; *s++; i++)
	;
	return (i);
}

/**
*_isdigit - checks if elements of string are digits or not
*@i: character to check
*Return: 0 if digits 1 if not
*/

int _isdigit(int i)
{
	if (i < '0' || i > '9')
		return (1);
	return (0);
}

/**
*_mult - multiplies 2 strings
*@n1: first string
*@n2: second string
*Return: result string of the multiplication
*/

char *_mult(char *n1, char *n2)
{
	int len1, len2, i, j, k, l;
	char *res;

	len1 = _strlen(n1);
	len2 = _strlen(n2);
	res = malloc(i = l = len1 + len2);
	if (res == NULL)
		printf("Error\n"), exit(98);
	for (i--; i >= 0; i--)
		res[i] = 0;
	for (len1--; len1 >= 0; len1--)
	{
		if (_isdigit(n1[len1]) == 1)
		{
			free(res);
			printf("Error\n"), exit(98);
		}
		i = n1[len1] - '0';
		k = 0;
		for (len2--; len2 >= 0; len2--)
		{
			if (_isdigit(n2[len2]) == 1)
			{
				free(res);
				printf("Error\n"), exit(98);
			}
			j = n2[len2] - '0';
			k += res[len1 + len2 + 1] + (i * j);
			res[len1 + len2 + 1] = k % 10;
			k = k / 10;
		}
		if (k)
			res[len1 + len2 + 1] += k;
	}
	return (res);
}

/**
*main - entry point
*@argc: arguments count
*@argv: arguments vector
*Return: 0 for success
*/

int main(int argc, char **argv)
{
	int i, j, k;
	char *result;

	if (argc != 3)
		printf("Error\n"), exit(98);
	k = _strlen(argv[1]) + _strlen(argv[2]);
	result = _mult(argv[1], argv[2]);
	i = 0;
	j = 0;
	for (; j < k; j++)
	{
		if (result[j])
			i = 1;
		if (i)
			_putchar(result[j] + '0');
	}
	if (!i)
		_putchar(48);
	_putchar('\n');
	free(result);
	return (0);
}
