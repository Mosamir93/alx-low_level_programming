#include <stdio.h>

/**
*main - entry point for program
*
*Return: 0 to indicate succes
*/

int main(void)
{
	char alpha = 'a';
	char ALPHA = 'A';

	while (alpha <= 'z')
{	putchar(alpha);
	alpha++;
}
	while (ALPHA <= 'Z')
{
	putchar(ALPHA);
	ALPHA++;
}
	putchar('\n');
	return (0);
}

