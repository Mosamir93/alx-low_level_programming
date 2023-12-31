#include "main.h"
#include <stdio.h>

/**
 *prl - prints x bytes in a line of buffer
 *@a: buffer to be printed
 *@x: bytes to be printed
 *@y: line of the buffer
 */

void prl(char *a, int x, int y)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		if (i > x)
			printf("  ");
		else
			printf("%02x", a[y * 10 + i]);
		if (i % 2)
			putchar(' ');
	}
	for (j = 0; j <= x; j++)
	{
		if (a[y * 10 + j] >= 32 && a[y * 10 + j] <= 126)
			putchar(a[y * 10 + j]);
		else
			putchar('.');
	}
}

/**
 *print_buffer - prints a buffer
 *@b: buffer to be printed
 *@size: size of bytes of the buffer
 */

void print_buffer(char *b, int size)
{
	int k;

	for (k = 0; k <= (size - 1) / 10 && size; k++)
	{
		printf("%08x: ", k * 10);
		if (k >= size / 10)
			prl(b, size % 10 - 1, k);
		else
			prl(b, 9, k);
		putchar('\n');
	}
	if (size == 0)
		putchar('\n');
}
