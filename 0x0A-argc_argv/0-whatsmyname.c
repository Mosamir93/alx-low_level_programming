#include <stdio.h>
#include <stdlib.h>

/**
*main - prints its name, followed by a new line
*@argc: number of arguments
*@argv: arguments vector
*Return: 0 to indicate success
*/

int main(int argc, char const **argv)
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}
