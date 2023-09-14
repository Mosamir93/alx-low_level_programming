#include "main.h"

/**
*print_line - prints a _ n times
*
*@n: number of times to print _ character
*/

void print_line(int n)
{
	int i;

	for (i = n; i <= n; i++)
	{
		if (i <= 0)
		{
			_putchar('\n');
		}
		else
		{
			_putchar('_');
		}
	}
	_putchar('\n');

}
