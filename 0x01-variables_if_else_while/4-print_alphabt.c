#include <stdio.h>

/**
*main - entry point for program
*
*Return: 0 to indicate succes
*/

int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
{
	if (alpha != 'q' && alpha != 'e')
	putchar(alpha);
	alpha++;
}
	putchar('\n');
	return (0);
}

