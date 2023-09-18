#include "main.h"

/**
 *rev_string - reverses a string
 *@s: string to be reversed
 *
 */

void rev_string(char *s)
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
