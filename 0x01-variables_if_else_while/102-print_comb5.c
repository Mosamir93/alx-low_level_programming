#include <stdio.h>

/**
*main - entry point for program
*
*Return: 0 for success without error
*/

int main(void)
{
	int i1 = 0;
	int i2;

	while (i1 <= 99)
	{
		i2 = 0;
			while (i2 <= 99)
			{
				if (i1 != i2)
				{
					putchar(i1 / 10 + '0');
					putchar(i1 %  +'0');
					putchar(' ');
					putchar(i2 / 10 + '0');
					putchar(i2 % +'0');

					if (i1 != 99)
					{
						putchar(',');
						putchar(' ');
					}
				}
				i2++;
		}
		i1++;
	}
	putchar('\n');
	return (0);
}
