#include "main.h"

/**
 *print_rev - prints a string in reverse
 *@s: string to be printed
 *
 */

void print_rev(char *s)
{
	int len;
	int i;

	for (len = 0; *s != '\0'; s++)
		len += 1;
	for (i = len; i >= 0; i--)
		_putchar(s[i]);

	_putchar('\n');
}
