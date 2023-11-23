#include "main.h"

/**
 * power - returns the power of the respective position
 * @a: index of the binary number
 * Return: the number to multiply the binary number with
 */
int power(int a)
{
	int i, b;

	b = 1;
	for (i = 0; i < a; i++)
		b *= 2;
	return (b);
}

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string
 * Return: unsigned int or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int x;
	int i, j;

	x = i = 0;
	if (!(*b) || !b)
		return (0);
	while (b[i])
		i++;
	for (j = 0; i > 0; i--, j++)
	{
		if (b[i - 1] != '1' && b[i - 1] != '0')
			return (0);
		x += (b[i - 1] - 48) * power(j);
	}
	return (x);
}
