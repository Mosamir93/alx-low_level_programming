#include <stdlib.h>
#include <stdio.h>
#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

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
		if (argv[i] < '0' || argv[i] > '9')
			printerror();
	}
}

/**
*_atoi - changes string to integers
*@argv: string to change
*Return: the number
*/

unsigned long long int _atoi(char *argv)
{
	int i, sign = 1;
	unsigned long long int n;

	n = 0;
	for (i = 0; argv[i] != '\0'; i++)
	{
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

void _print(unsigned long long int mult)
{
	if (mult / 10 != 0)
		_print(mult / 10);
	_putchar((mult % 10) + '0');
}

/**
*main - entry point
*@argc: number of arguments
*@argv: arguments vector
*Return: 0 for success
*/

int main(int argc, char **argv)
{
	unsigned long long int num1, num2, mult;

	if (argc != 3)
		printerror();
	_isdigit(argv[1]);
	_isdigit(argv[2]);
	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	mult = num1 * num2;
	_print(mult);
	_putchar('\n');
	return (0);
}
