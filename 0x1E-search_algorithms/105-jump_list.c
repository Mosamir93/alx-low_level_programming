#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_list - searches for a value in a sorted list of
 * integers using the Jump search algorithm
 * @list: a pointer to the head of the list to search in
 * @value: the value to search for
 * @size: the number of nodes in list
 * Return: a pointer to the first node where value is located
 * or NULL If value is not present in head or if head is NULL
*/

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	listint_t *prev = NULL, *current = list;
	size_t jump = sqrt(size), i;

	if (!list || size == 0)
		return (NULL);
	while (current && current->next && current->n < value)
	{
		prev = current;
		for (i = 0; current->next && i < jump; i++)
			current = current->next;
		printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
	}
	printf("Value found between indexes [%lu]", prev->index);
	printf(" and [%lu]\n", current->index);
	while (prev && prev->index <= current->index)
	{
		printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
		if (prev->n == value)
			return (prev);
		prev = prev->next;
	}
	return (NULL);
}
