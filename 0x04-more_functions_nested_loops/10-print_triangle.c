#include "main.h"

/**
*print_triangle - prints a a triangle using #
*
*@size: size of the triangle
*/

void print_triangle(int size)
{
	int i, j;

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n ; j++)
		{
		if (j + i <= n)
			_putchar(' ');
		else	
			_putchar('#');
		}	
		_putchar('\n');
	}
	if (n <= 0)
		_putchar('\n');

}
