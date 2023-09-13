#include <stdio.h>

/**
 *main - entry point for control
 *
 *Return: 0 to indicate succes
 */

int main(void)
{
	unsigned long int i1 = 1;
	unsigned long int i2 = 2;
	unsigned long int i3;
	unsigned long int n;
	unsigned long int i4;
	unsigned long int i5;

	printf("%lu, ", i1);
	printf("%lu", i2);

	for (n = 3; n <= 98; n++)
	{
		i3 = i1 + i2;
		i4 = (i1 + i2) / 10000000000;
		i5 = (i1 + i2) % 10000000000;
		if (n >= 75)
		{
			printf(", %lu%lu", i4, i5);
		}
		else
		{
			printf(", %lu", i3);
		}
		i1 = i2;
		i2 = i3;
	}
	printf("\n");
	return (0);
}
