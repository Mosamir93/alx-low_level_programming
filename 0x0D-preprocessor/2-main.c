#include <stdio.h>

/**
*main - prints the name of the file it was compiled from, followed by a new line
*Return: 0 for succes
*/

int main(void)
{
	printf("%s\n", __file__);
	return (0);
}
