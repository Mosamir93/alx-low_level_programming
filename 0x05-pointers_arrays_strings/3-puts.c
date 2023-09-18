#include "main.h"

/**
*_puts - prints a string
*@str: string to be printed
*
*/

void _puts(char *str)
{
	char *ptr;

	for (ptr = str; *ptr != '\0'; ptr++)
		_putchar('*ptr');

	_putchar('\n');
}
