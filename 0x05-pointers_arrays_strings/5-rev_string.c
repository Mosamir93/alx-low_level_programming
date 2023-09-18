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
	int n = 0;

	for (len = 0; s[len] != '\0'; len++)
	{
	}
	for (i = len - 1; i >= 0; i--)
	{
		s[n] = s[i];
		n += 1;
	}
	_putchar('\n');
}
