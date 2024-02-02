#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the array of pointers
 * Return: pointer to the table or NULL on failure
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	unsigned long int i;

	table = malloc(sizeof(hash_table_t));
	if (!table)
		return (NULL);
	table->size = size;
	table->array = malloc(size * sizeof(hash_node_t *));
	if (!(table->array))
	{
		free(table);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		table->array[i] = NULL;
	return (table);
}
