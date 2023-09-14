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
	unsigned long int k;
	unsigned long int n;
	unsigned long int i1;
	unsigned long int j1;
	unsigned long int k1;
	unsigned long int i2;
	unsigned long int j2;
	unsigned long int k2;

	printf("%lu, ", i);
	printf("%lu", k);

	for (n = 3; n <= 88; n++)
	{
		k = i + j;
		printf(", %lu", k);
		i = j;
		j = k;
	}

	i1 = i / 1000000000;
	i2 = i % 1000000000;
	j1 = j / 1000000000;
	j2 = j % 1000000000;

	for (n = 89; n <= 98; n++)
	{
		k1 = i1 + j1;
		k2 = i2 + j2;
		printf(", %lu%lu", k1, k2);
		i1 = k1 / 1000000000;
		i2 = k2 % 1000000000;
		j1 = k1 / 1000000000;
		j2 = k2 % 1000000000;
	}
	printf("\n");
	return (0);
}
