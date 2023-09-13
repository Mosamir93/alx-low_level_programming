#include <stdio.h>

/**
 *main - entry point for control
 *
 *Return: 0 to indicate succes
 */

int main(void)
{
	unsigned long int i1 = 0;
	unsigned long int i2 = 1;
	unsigned long int i3;
	unsigned long int n;
	unsigned long int sum;

	for (n = 3; n <= 50; n++)
	{
		i3 = i1 + i2;
		i1 = i2;
		i2 = i3;
		sum = 0;

		if (i3 <= 4000000 && i3 % 2 == 0)
		{
			sum += i3;
		}

	}
	printf("\n");
	return (0);
}
