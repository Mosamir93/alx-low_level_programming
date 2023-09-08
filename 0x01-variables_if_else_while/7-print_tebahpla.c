#include <stdio.h>

/**
*main - entry point for program
*
*Return: 0 to indicate succes
*/

int main(void)
{
	char alpha = 'z';

	while (alpha >= 'a')
{	putchar(alpha);
	alpha--;
}
	putchar('\n');
	return (0);
}

