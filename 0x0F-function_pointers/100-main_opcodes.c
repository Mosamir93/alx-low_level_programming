#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
*main - entry point checks arguments count and converts it to integer
*@argc: arguments count
*@argv: arguments vector
*Return: 0 to indicate success
*/

int main(int argc, char **argv)
{
	int n, i;
	char *ptr = (char *)main;

	if (argc != 2)
		printf("Error\n"), exit(1);
	n = atoi(argv[1]);
	if (n < 0)
		printf("Error\n"), exit(2);

	for (i = 0; i < n; i++)
	{
 		printf("%02hhx", ptr[i]);
 		if (i != (n - 1))
		printf(" ");
 	}
 	printf("\n");
	return (0);
}
