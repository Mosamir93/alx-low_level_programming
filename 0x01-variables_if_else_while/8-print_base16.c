#include <stdio.h>

/**
*main - entry point for program
*
*Return: 0 to indicate succes
*/

int main(void)
{
	char alpha = 'a';
	int number = '0';

	while (number <= '9')
{	putchar(number + '0');
	number++;
}

	while (alpha <= 'z')
{	putchar(alpha);
	alpha++;
}
	putchar('\n');
	return (0);
}

