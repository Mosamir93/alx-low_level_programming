#include <stdio.h>

/**
*main - entry point for program
*
*Return: 0 to indicate succes
*/

int main(void)
{
	int i = 0;
	int n;

	while (i <= 9)
{
	n = 1;
	while (n <= 9)
{
	if (i != n && i < n)
{
	putchar(i + '0');
	putchar(n + '0');

	if (i != 8)
{
	putchar(',');
	putchar(' ');
}
}
	n++;
}
	i++;
}
	putchar('\n');
	return (0);
}

