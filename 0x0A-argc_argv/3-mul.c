#include <stdio.h>
#include <stdlib.h>

/**
*main - multiplies two numbers
*@argc: number of arguments
*@argv: arguments vector
*Return: 0 to indicate success or 1 if no 2 arguments recieved
*/

int main(int argc, char const **argv)
{
	int mult;

	if (argc == 3)
	{
		mult = argv[1] * argv[2];
		printf("%d\n", mult);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
