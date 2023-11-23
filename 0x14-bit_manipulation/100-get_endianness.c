#include "main.h"

/**
 * get_endianness - checks the endianness
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	unsigned int i = 1;
	char *byte;

	i = 1;
	byte = (char *)&i
		return (*byte == 1);
}
