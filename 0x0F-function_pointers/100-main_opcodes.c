#include <stdio.h>
#include <stdlib.h>

/**
*pr_opc - prints opcodes of it's own functiom as an array of bytes
*@n: number of bytes
*/

void pr_opc(int n)
{
	unsigned char *ptr;
	int i;

	ptr = (unsigned char *)&pr_opc;
	for (i = 0; i < n; i++)
	{
		printf("%02x", ptr[i]);
		if (i != (n - 1))
			printf(" ");
	}
	printf("\n");
}

/**
*main - entry point checks arguments count and converts it to integer
*@argc: arguments count
*@argv: arguments vector
*Return: 0 to indicate success
*/

int main(int argc, char **argv)
{
	int n;

	if (argc != 2)
		printf("Error\n"), exit(1);
	n = atoi(argv[1]);
	if (n < 0)
		printf("Error\n"), exit(2);
	pr_opc(n);
	return (0);
}
