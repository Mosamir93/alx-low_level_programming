#include "main.h"

/**
*print_triangle - prints a a triangle using #
*
*@size: size of the triangle
*/

void print_triangle(int size)
{
	int i, j;

	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size ; j++)
		{
		if (j + i <= size)
			_putchar(' ');
		else	
			_putchar('#');
		}	
		_putchar('\n');
	}
	if (n <= 0)
		_putchar('\n');

}
