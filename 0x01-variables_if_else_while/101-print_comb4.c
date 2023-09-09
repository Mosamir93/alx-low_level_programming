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
	int d;

	while (i <= 9)
{
	n = 0;
	while (n <= 9)
{
	d = 0;
	while (d <= 9)
{
	if (i != n && i < n && n != d && n < d)
{
	putchar(i + '0');
	putchar(n + '0');
	putchar(d + '0');

	if (i != 7)
{
	putchar(',');
	putchar(' ');
}
}
}
	d++;
}
	n++;
}
	i++;
	putchar('\n');
	return (0);
}

