#include <stdio.h>

/**
*main - entry point for program
*
*Return: 0 to indicate succes
*/

int main(void)
{
	int i = 0;

	while (i <= 9)
{	putchar(i + '0');
	if (i != 9)
	putchar(',');
	putchar(' ');
	i++;
}
	putchar('\n');
	return (0);
}

