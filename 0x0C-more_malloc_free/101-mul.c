#include "main.h"
#include <stdlib.h>

/**
 *printerror - print Error, followed by a new line, and exit status of 98
 */

void printerror(void)
{
	int i;
	char arr[] = {'E', 'r', 'r', 'o', 'r', '\n'};

	for (i = 0; i < 6; i++)
		_putchar(arr[i]);
	exit(98);
}

/**
 *_isdigit - checks if elements of a string are digits
 *@argv: string to be checked
 */

void _isdigit(char *argv)
{
	int i;

	for (i = 0; argv[i] != '\0'; i++)
	{
		if (argv[0] == '-')
			continue;
		if (argv[i] < '0' || argv[i] > '9')
			printerror();
	}
}

/**
 *_atoi - changes string to integers
 *@argv: string to change
 *Return: the number
 */

int _atoi(const char *argv)
{
	int i, sign = 1;
	unsigned long int n;

	n = 0;
	for (i = 0; argv[i] != '\0'; i++)
	{
		if (argv[i] != '-' && (argv[i] < '0' || argv[i] > '9'))
			printerror();
		if (argv[i] == '-')
			sign *= -1;
		else
			n = (n * 10) + (argv[i] - 48);
	}
	n *= sign;
	return (n);
}

/**
 *_print - prints a number
 *@mult: number to be printed
 */

void _print(unsigned long int mult)
{
	unsigned long int i, div = 1;
	long int j;

	for (i = 0; mult / div > 9; i++, div *= 10)

		for (j = i; j >= 0; j--, div /= 10)
		{
			_putchar((mult / div) + '0');
			mult %= div;
		}
}

/**
 *main - entry point
 *@argc: number of arguments
 *@argv: arguments vector
 *Return: 0 for success
 */

int main(int argc, char **argv)
{
	(void)argc;

	if (argc != 3)
		printerror();
	_print(_atoi(argv[1]) * _atoi(argv[2]));
	_putchar('\n');
	return (0);
}
