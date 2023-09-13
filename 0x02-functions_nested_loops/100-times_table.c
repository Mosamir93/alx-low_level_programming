#include "main.h"

/**
 *print_times_table - prints the n times table, starting with 0
 *
 *@n: number given to make time table
 */

void print_times_table(int n)
{
	int a;
	int b;
	int c;

	if (n < 15 && n > 0)
	{
		for (a = 0; a <= n; a++)
		{
			_putchar('0');
			for (b = 0; b <= n; b++)
			{
				_putchar(',');
				_putchar(' ');
				c = a * b;

				if (c <= 9)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(c + '0');
				}
				else if (c > 9 && c <= 99)
				{
					_putchar(' ');
					_putchar((c / 10) + '0');
					_putchar((c % 10) + '0');
				}
				else if (C > 99)
				{
					_putchar((c / 100) + '0');
					_putchar((c / 10) + '0');
					_putchar((c % 10) + '0');
				}
				_putchar('\n');
			}
		}
	}
}