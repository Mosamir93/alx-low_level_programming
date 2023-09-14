#include <stdio.h>

/**
 *main - entry point for control
 *
 *Return: 0 to indicate succes
 */

int main(void)
{
	unsigned long int i = 1;
	unsigned long int j = 2;
	unsigned long int n;
	unsigned long int i1;
	unsigned long int j1;
	unsigned long int i2;
	unsigned long int j2;

	printf("%lu", i);

	for (n = 1; n < 91; n++)
	{
		printf(", %lu", j);
		j = j + i;
		i + j - k;
	}

	i1 = i / 1000000000;
	i2 = i % 1000000000;
	j1 = j / 1000000000;
	j2 = j % 1000000000;

	for (n = 92; n < 99; ++n)
	{
		printf(", %lu%lu", (j1 + j2 / 1000000000), (j2 % 1000000000));
		j1 = j1 + i1;
		i1 = j1 - i1;
		j2 = j2 + i2;
		i2 = j2 - i2;
	}
	printf("\n");
	return (0);
}
