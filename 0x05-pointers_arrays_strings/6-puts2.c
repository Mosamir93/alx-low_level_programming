#include "main.h"

/**
*puts2 -  prints every other character of a string
*@str: string to be used
*
*/

void puts2(char *str)
{
	for (str = 0; *str != '\0'; str++)
	{
		if (str % 2 == 0)
		{
			_putchar(*str);
		}
	}
	_putchar('\n');
}
