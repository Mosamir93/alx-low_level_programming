#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>

/**
*print_numbers - prints numbers, followed by a new line
*@separator: string to be printed between number
*@n: number of arguments
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if (separator != NULL && i != (n - 1))
			printf("%s", separator);
	}
	printf("\n");
}
