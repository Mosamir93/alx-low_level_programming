#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
*pr_int - prints integers from va_list
*@s: separator
*@args: the va_list
*/

void pr_int(char *s, va_list args)
{
	printf("%s%d", s, va_arg(args, int));
}

/**
*pr_char - prints characters from va_list
*@s: separator
*@args: the va_list
*/

void pr_char(char *s, va_list args)
{
	printf("%s%c", s, va_arg(args, int));
}

/**
*pr_float - prints floats from va_list
*@s: separator
*@args: the va_list
*/

void pr_float(char *s, va_list args)
{
	printf("%s%f", s, va_arg(args, double));
}

/**
*pr_string - prints strings from va_list
*@s: separator
*@args: the va_list
*/

void pr_string(char *s, va_list args)
{
	char *string = va_arg(args, char *);

	switch ((int)(!string))
		case 1:
			string = "(nil)";
	printf("%s%s", s, string);
}

/**
*print_all - prints anything
*@format: format of elements to be printed
*/


void print_all(const char * const format, ...)
{
	va_list args;
	int i, j;
	char *s = "";
	_spec specs[] = {
		{"c", pr_char},
		{"i", pr_int},
		{"f", pr_float},
		{"s", pr_string},
		{NULL, NULL}
	};

	va_start(args, format);
	i = 0;
	while (format[i] && format)
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == specs[j].spec[0])
			{
				specs[j].get_spec(s, args);
				s = ", ";
			}
			j++;
		}
		i++;
	}
	va_end(args);
	printf("\n");
}
