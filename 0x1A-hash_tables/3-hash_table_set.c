#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: the hash table you want to add or update the key/value to
 * @key: the key of the new element
 * @value: he value associated with the key
 * Return: 1 on success or 0 on failure
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *element, *current;

	if (!key || !ht || ht->size == 0 || !(*key))
		return (0);
	index = key_index(*key, ht->size);
	element = malloc(sizeof(hash_node_t));
	if (!element)
		return (0);
	element->value = strdup(value);
	if (!element->value)
	{
		free(element);
		return (0);
	}
	element->key = strdup(key);
	if (!element->key)
	{
		free(element->value);
		free(element);
		return (0);
	}
	current = ht->array[index];
	if (current == NULL)
		ht->array[index] = element;
	if (current != NULL)
	{
		element->next = current;
		ht->array[index] = element;
	}
	return (1);
}
