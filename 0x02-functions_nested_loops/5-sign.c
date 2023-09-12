#include "main.h"

/**
 *print_sign - prints the sign of a number
 *@n: number to be tested
 *Return: 1 if positive, 0 if equal to zero and -1 if negative
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
}

