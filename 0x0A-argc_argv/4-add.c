#include <stdio.h>
#include <stdlib.h>

/**
*main - adds positive numbers
*@argc: number of arguments
*@argv: arguments vectoe
*Return: 0 for success or 1 if there is a symbol in the numbers
*/

int main(int argc, char **argv)
{
	int i, k, sum;
	char *c;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	sum = 0;
	for (i = 1; i < argc; i++)
	{
		c = *argv + i;
		for (k = 0; c[k] != '\0'; k++)
		{
			if (c[k] < '0' || c[k] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
