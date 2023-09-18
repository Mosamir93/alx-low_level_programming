#include "main.h"

/**
 *puts_half - prints second half of a string
 *@str: string to be used
 *
 */

void puts_half(char *str)
{
	int len;
	int i;


	for (len = 0; str[len] != '\0'; len++)
	{
	}
	for (i = (len - 1) / 2; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
