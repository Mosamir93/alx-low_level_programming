#include "lists.h"

/**
 * add_node -  adds a new node at the beginning of a list_t list
 * @head: head of the list
 * @str: string to be added to node
 * Return: the new head
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr = malloc(sizeof(list_t));

	if (!head || !ptr)
		return (NULL);

	if (str)
	{
		ptr->str = strdup(str);
		ptr->len = strlen(str);
	}
	ptr->next = *head;
	*head = ptr;
	return (ptr);
}
