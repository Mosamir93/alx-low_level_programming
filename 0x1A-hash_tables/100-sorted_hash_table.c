#include "hash_tables.h"

/**
 * shash_table_create - creates a sorted hash table
 * @size: size of the array
 * Return: pointer to the newly created hash table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht;
	unsigned long int i;

	ht = malloc(sizeof(shash_table_t));
	if (!ht)
		return (NULL);
	ht->size = size;
	ht->array = malloc(size * sizeof(shash_node_t *));
	if (!(ht->array))
	{
		free(ht);
		return (NULL);
	}
	for (i = 0; i < size; i++)
		ht->array[i] = NULL;
	ht->shead = ht->stail = NULL;
	return (ht);
}

/**
 * shash_table_set - adds an element to the sorted hash table
 * @ht: hash table to add or update the key/value
 * @key: key string
 * @value: value string
 * Return: 1 if it succeeded, 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *element, *current;

	if (!key || !ht || ht->size == 0 || !(*key))
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	element = malloc(sizeof(shash_node_t));
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
	else
	{
		if (strcmp(key, current->key) < 0)
		{
			element->next = current;
			ht->array[index] = element;
		}
		else
		{
			while (current->next && strcmp(key, current->next->key) > 0)
				current = current->next;

			element->next = current->next;
			current->next = element;
		}
	}

	if (ht->shead == NULL)
	{
		ht->shead = ht->stail = element;
	}
	else
	{
		if (strcmp(key, ht->shead->key) < 0)
		{
			element->snext = ht->shead;
			ht->shead->sprev = element;
			ht->shead = element;
		}
		else
		{
			current = ht->shead;
			while (current->snext && strcmp(key, current->snext->key) > 0)
				current = current->snext;

			element->snext = current->snext;
			element->sprev = current;
			if (current->snext)
				current->snext->sprev = element;
			else
				ht->stail = element;

			current->snext = element;
		}
	}

	return (1);
}

/**
 * shash_table_get - retrieves a value associated with a key
 * @ht: hash table to look into
 * @key: key string
 * Return: value associated with the element or NULL if key couldn't be found
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *current;

	if (!ht || !key || !(*key) || ht->size == 0)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];
	while (current)
	{
		if (strcmp(key, current->key) == 0)
			return (current->value);
		current = current->next;
	}
	return (NULL);
}

/**
 * shash_table_print - prints a sorted hash table
 * @ht: the hash table
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *current;

	if (!ht)
		return;

	printf("{");
	current = ht->shead;
	while (current)
	{
		printf("'%s': '%s'", current->key, current->value);
		if (current->snext)
			printf(", ");
		current = current->snext;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - prints a sorted hash table in reverse order
 * @ht: the hash table
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *current;

	if (!ht)
		return;

	printf("{");
	current = ht->stail;
	while (current)
	{
		printf("'%s': '%s'", current->key, current->value);
		if (current->sprev)
			printf(", ");
		current = current->sprev;
	}
	printf("}\n");
}

/**
 * shash_table_delete - deletes a sorted hash table
 * @ht: the hash table
 */
void shash_table_delete(shash_table_t *ht)
{
	unsigned long int i;
	shash_node_t *current, *temp;

	if (!ht || ht->size == 0)
		return;

	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current)
		{
			temp = current;
			current = current->next;
			free(temp->value);
			free(temp->key);
			free(temp);
		}
	}

	free(ht->array);
	free(ht);
}
