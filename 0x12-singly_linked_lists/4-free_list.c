#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: head of the list
 */
void free_list(list_t *head)
{
	list_t *ptr = head;
	list_t *next;

	while (ptr)
	{
		next = ptr->next;
		free(ptr->str);
		free(ptr);
		ptr = next;
	}
}
