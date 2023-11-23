#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: the number to get the binary of
 * @index: index of the bit to get
 * Return: the value of bit at index or -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	return ((n >> index) & 1);
}
