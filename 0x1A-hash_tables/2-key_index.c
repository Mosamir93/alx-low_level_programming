#include "hash_tables.h"

/**
 * key_index - gives you the index of a key
 * @key: the key to find it's index
 * @size: size of the hash table array
 * Return: the key index or 0 on failure
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	if (!key || size == 0)
		return (0);

	index = hash_djb2(key) % size;
	return (index);
}
