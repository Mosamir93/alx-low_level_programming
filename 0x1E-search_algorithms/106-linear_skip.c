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
	skiplist_t *prev = list, *express = list;

	if (list == NULL)
		return (NULL);
	while (express->next && express->n < value)
	{
		prev = express;
		if (express->express)
		{
			express = express->express;
			printf("Value checked at index [%lu] = [%d]\n",
					express->index, express->n);
		}
		else
		{
			while (express->next)
				express = express->next;
		}
	}
	printf("Value found between indexes [%lu] and [%lu]\n",
				prev->index, express->index);
	while (prev->index < express->index && prev->n < value)
	{
		printf("Value checked at index [%lu] = [%d]\n",
					prev->index, prev->n);
		prev = prev->next;
	}
	printf("Value checked at index [%lu] = [%d]\n",
			prev->index, prev->n);
	return (prev->n == value ? prev : NULL);
}
