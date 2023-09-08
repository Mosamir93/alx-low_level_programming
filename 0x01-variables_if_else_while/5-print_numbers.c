#include <stdio.h>

/**
*main - entry point for program
*
*Return: 0 to indicate succes
*/

int main(void)
{
	int i = 1;

	while (i <= 9)
{	putchar(i + '0');
	i++;
}
	putchar('\n');
	return (0);
}

