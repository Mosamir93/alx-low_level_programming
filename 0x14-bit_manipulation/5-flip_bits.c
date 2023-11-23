#include "main.h"

/**
 * flip_bits -  returns the number of bits flipped
 * to change number to another.
 * @n: the number to change
 * @m: the number to change to
 * Return: the number of bits changed
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count;
	unsigned long int i;

	count = 0;
	i = n ^ m;
	while (i)
	{
		count += i & 1;
		i >>= 1;
	}
	return (count);
}
