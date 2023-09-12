#include "main.h"

/**
 *times_table - prints the 9 times table, starting with 0
 *
 */

void times_table(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			_putchar(i * j + '0');
			_putchar(',');
			_putchar(' ');
		}
	}
}
