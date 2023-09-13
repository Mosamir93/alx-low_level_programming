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

	printf("%lu, ", i1);
	printf("%lu", i2);

	for (n = 3; n <= 98; n++)
	{
		i3 = i1 + i2;
		if (i3 >= 9223372036854775807)
		{
			printf(", %lu%lu", i3 / 1000000000, i3 % 1000000000);
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
