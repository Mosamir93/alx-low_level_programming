#include <stdio.h>

/**
*main - entry point for program
*
*Return: return is 0 to indicate running without error
*/
int main(void)
{
	char alpha = 'a';
	char ALPHA = 'A';

	while ('a' <= 'z')
{
	putchar (alpha);
	alpha++;
}
	while ('A' <= 'Z')
{
	putchar (ALPHA);
	ALPHA++;
}
	putchar ('\n');
	return (0);
}
