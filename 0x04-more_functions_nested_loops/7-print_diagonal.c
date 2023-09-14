#include "main.h"

/**
*print_diagonal - prints a diagonal line
*
*@n: number of times to print \ character
*/

void print_diagonal(int n)
{
	int i, j;

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar(92);
		_putchar('\n');
	}
	if (n <= 0)
		_putchar('\n');

}
