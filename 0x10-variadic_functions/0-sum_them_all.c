#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>

/**
*sum_them_all - returns the sum of all its parameters
*@n: number of arguments
*Return: sum of arguments or 0 if n is equal to 0
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int sum, x;

	if (n == 0)
		return (0);
	va_start(args, n);
	sum = 0;
	for (i = 0; i < n; i++)
	{
		x = va_arg(args, int);
		sum += x;
	}
	va_end(args);
	return (sum);
}
