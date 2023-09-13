#include <stdio.h>

/**
 *main - entry point for control
 *
 *Return: 0 to indicate succes
 */

int main(void)
{
	long long int i1 = 1;
	long long int i2 = 2;
	long long int i3;
	long long int n;

	printf("%lld, ", i1);
	printf("%lld, ", i2);

	for (n = 3; n <= 50; n++)
	{
		i3 = i1 + i2;
		printf("%lld, ", i3);
		i1 = i2;
		i2 = i3;
	}
	printf("\n");
	return (0);
}
