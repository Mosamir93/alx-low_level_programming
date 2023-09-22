#include "main.h"
#include <stdio.h>

/**
 *prl - prints x bytes in a line of buffer
 *@b: buffer to be printed
 *@x: bytes to be printed
 *@y: line of the buffer
 */

void prl(char *b, int x, int y)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		if (i > x)
			printf(" ");
		else
			printf("%02x", b[y * 10 + i]);
		if (i % 2 == 0)
			printf(" ");
	}
	for (j = 0; j <= x; j++)
	{
		if (b[y * 10 + j] >= 32 && b[y * 10 + j] <= 126)
			putchar(b[y * 10 + j]);
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

	for (k = 0; k <= size && (size - 1) / 10; k++)
	{
		printf("%08x: ", k * 10);
		if (k >= size / 10)
			prl(b, size % 10 - 1, k);
		else
			prl(b, 9, k);
		printf("\n");
	}
	if (size <= 0)
		printf("\n");
}
