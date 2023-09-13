#include <stdio.h>

/**
 *main - entry point for control
 *
 *Return: 0 to indicate succes
 */

int main(void)
{
	int i1 = 1;
	int i2 = 2;
	int i3;
	int n;

	printf("%d, ", i1);
	printf("%d, ", i2);

	for (n = 3; n <= 50; n++)
	{
		i3 = i1 + i2;
		printf("%d, ", i3);
		i1 = i2;
		i2 = i3;
	}
	printf("\n");
	return (0);
}
