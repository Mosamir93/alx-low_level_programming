#include "main.h"

/**
*print_rev - prints a string in reverse
*@s: string to be printed
*
*/

void print_rev(char *s)
{

	for (*s = '\0'; s >= s[0]; s--)
		_putchar(*s);

	_putchar('\n');
}
