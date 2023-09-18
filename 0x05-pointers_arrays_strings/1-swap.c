#include "main.h"

/**
 *swap_int - swap two arguments values
 *@a: first value to be swapped
 *@b: second value to be swapped
 */

void swap_int(int *a, int *b)
{
	int *pa, *pb, temp;

	temp = *b;
	pa = a;
	pb = b;
	*pa = *b;
	*pb = temp;
}
