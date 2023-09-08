#include <stdio.h>

/**
*main - entry point for program
*
*Return: 0 to indicate succes
*/

int main(void)
{
	int i = 0;
	int n = 1;

	while (i <= 9)
{	putchar(i + '0');
	while (n <= 9)
{	putchar(n + '0');

	if (i != 89)
{
	putchar(',');
	putchar(' ');
}
	i++;
	n++;
}
}
	putchar('\n');
	return (0);
}

