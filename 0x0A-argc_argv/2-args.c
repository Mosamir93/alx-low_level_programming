#include <stdio.h>
#include <stdlib.h>

/**
*main - prints all arguments it receives
*@argc: number of arguments
*@argv: arguments vector
*Return: 0 to indicate success
*/

int main(int argc, char const **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
