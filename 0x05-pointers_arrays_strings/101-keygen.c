#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
*main - entry point for control
*
*Return: 0 to indicate success
*/

int main(void)
{
	int l;
	char c;

	srand(time(NULL));
	for (l = 0; l <= 2645; l += c)
	{
		c = rand() % 128;
		putchar(c);
	}
	putchar(2772 - l);
	return (0);
}
