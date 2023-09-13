#include <stdio.h>

/**
 *main - entry point for control
 *
 *Return: 0 for succes
 */

int main(void)
{
	int a;
	int b = 0;

	for (a = 1; a < 1024; a++)
	{
		if (a % 3 == 0 || a % 5 == 0)
		{
			b += a;
		}
	}
	printf("%d\n", b);
	return (0);
}
