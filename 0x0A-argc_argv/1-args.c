#include <stdio.h>
#include <stdlib.h>

/**
*main - prints the number of arguments passed into it
*@argc: number of arguments
*@argv: arguments vector
*Return: 0 to indicate success
*/

int main(int argc, char const **argv)
{
	(void)argc;

	printf("%d\n", argc);
	return (0);
}
