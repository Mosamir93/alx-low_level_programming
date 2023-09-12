#include "main.h"

/**
 *times_table - prints the 9 times table, starting with 0
 *
 */

void times_table(void)
{
	int i;
	int j;
	int k;
	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			k = i * j
			_putchar(k + '0');
			_putchar(',');
			_putchar(' ');
		}
	}
}
