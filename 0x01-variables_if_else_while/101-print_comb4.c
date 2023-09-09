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
	int i3;

	while (i1 <= 9)
	{
		i2 = 0;

		while (i2 <= 9)
		{
			i3 = 0;

			while (i3 <= 9)
			{
				if (i1 != i2 && i1 < i2 && i2 != i3 && i2 < i3)
				{
					putchar(i1 + '0');
					putchar(i2 + '0');
					putchar(i3 + '0');
					if (i1 != 7)
					{
						putchar(',');
						putchar(' ');
					}
				}
				i3++;
			}
			i2++;
		}
		i1++;
	}
	putchar('\n');
	return (0);
}
