#include "main.h"

/**
 *print_last_digit - prints the last digit of a number
 *@n: number to print the last digit of
 *Return: i which is the last digit
 */

int print_last_digit(int n)
{
	int i = n % 10;

	_putchar(i);
	return (i);
}
