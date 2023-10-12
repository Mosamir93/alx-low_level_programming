#include "variadic_functions.h"

/**
*pr_int - prints integers from va_list
*@args: the va_list
*/

void pr_int(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
*pr_char - prints characters from va_list
*@args: the va_list
*/

void pr_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
*pr_float - prints floats from va_list
*@args: the va_list
*/

void pr_float(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
*pr_string - prints strings from va_list
*@args: the va_list
*/

void pr_string(va_list args)
{
	char *string = va_arg(args, char *);

	switch ((int)(!string))
	{
	case 1:
		string = "(nil)";
	}
	printf("%s", string);
}

/**
*print_all - prints anything
*@format: format of elements to be printed
*/


void print_all(const char * const format, ...)
{
	va_list args;
	int i, j;
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
		while (specs[j].spec)
		{
			if (format[i] == specs[j].spec[0])
			{
				specs[j].get_spec(args);
				if (format[i + 1] != '\0')
					printf(", ");
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
