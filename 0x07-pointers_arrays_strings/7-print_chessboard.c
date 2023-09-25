#include "main.h"

/**
*print_chessboard - prints the chessboard
*@a: the 2d array to be printed
*/

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		if (i > 0)
			_putchar('\n');

		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
	}
}
