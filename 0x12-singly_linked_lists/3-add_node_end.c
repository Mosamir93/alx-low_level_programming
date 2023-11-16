#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: head of the linked list
 * @str: string to be added to the node
 * Return: address of the new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr = malloc(sizeof(list_t));
	list_t *p = *head;

		if (!head || !ptr)
			return (NULL);

	if (!str)
	{
		free(ptr);
		return (NULL);
	}
	ptr->str = strdup(str);
	ptr->len = strlen(str);
	if (*head)
	{
		while (p->next)
		{
			p = p->next;
		}
		p->next = ptr;
	}
	else
		*head = ptr;

	return (ptr);
}
