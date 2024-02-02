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
	hash_node_t *element, *current, *temp;

	if (!key || !(strlen(key)) || !ht || ht->size == 0 || !(ht->array) || !(*key))
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[index];
	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = strdup(value);
			if (!temp->value)
				return (0);
			return (1);
		}
		temp = temp->next;
	}
	element = alloc_new_node(value, key);
	if (!element)
		return (0);
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

/**
 * alloc_new_node - allocates memory for new node
 * @key: the key of the new node
 * @value: value of the new node
 * Return: the new node or NULL on failure
 */

hash_node_t *alloc_new_node(const char *value, const char *key)
{
	hash_node_t *element;

	element = malloc(sizeof(hash_node_t));
	if (!element)
		return (NULL);
	element->value = strdup(value);
	if (!element->value && value)
	{
		free(element);
		return (NULL);
	}
	element->key = strdup(key);
	if (!element->key)
	{
		free(element->value);
		free(element);
		return (NULL);
	}
	return (element);
}
