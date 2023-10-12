#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>
#include <stdio.h>

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
*struct spec - specifier structure
*@spec: specifier
*@get_spec: gets respective function
*/

typedef struct spec
{
	char *spec;
	void (*get_spec)(char *, va_list);
} _spec;

#endif
