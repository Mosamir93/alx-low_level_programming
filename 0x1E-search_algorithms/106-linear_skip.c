#include <stdio.h>
#include "search_algos.h"

/**
 * linear_skip - searches for a value in a sorted skip list of integers
 * @list: a pointer to the head of the skip list to search in
 * @value: the value to search for
 * Return:  a pointer on the first node where value is located
 * or NULL If value is not present in list or if head is NULL
*/

skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *prev = list, *express = list, *current = NULL;

	if (list == NULL)
		return (NULL);
	while (express && express->express && express->n <= value)
	{
		prev = express;
		express = express->express;
		printf("Value checked at index [%lu] = [%d]\n", express->index, express->n);
		if (express->n == value)
			return (express);
	}
	if (express->n > value)
	{
		printf("Value found between indexes [%lu] and [%lu]\n",
				prev->index, express->index);
		while (prev && prev->index <= express->index)
		{
			printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
			if (prev->n == value)
				return (prev);
			prev = prev->next;
		}
	}
	else
	{
		current = express;
		while (current->next)
			current = current->next;
		printf("Value found between indexes [%lu] and [%lu]\n",
				express->index, current->index);
		while (express && express->index <= current->index)
		{
			printf("Value checked at index [%lu] = [%d]\n", express->index, express->n);
			if (express->n == value)
				return (express);
			express = express->next;
		}
	}
	return (NULL);
}
