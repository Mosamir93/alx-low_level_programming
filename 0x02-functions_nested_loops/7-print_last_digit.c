#include "main.h"

/**
 *print_last_digit - prints the last digit of a number
 *@n: number to print the last digit of
 *Return: i which is the last digit
 */

int print_last_digit(int n)
{
	int i;

	if (n < 0)
	i = -1 * (n % 10);
	else
	i = n % 10;
	_putchar(i + '0');
	return (i);
}
