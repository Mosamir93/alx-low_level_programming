#include <stdio.h>
#include <stdlib.h>

/**
*main - prints the number of arguments passed into it
*@argc: number of arguments
*@argv: arguments vector
*Return: 0 to indicate success
*/

int main(int argc, char **argv)
{
	printf("%d\n", (argc - 1));
	return (0);
}
