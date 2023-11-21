#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: head of the list
 * Return: pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *p, *temp;

	if (!head || !*head)
		return (NULL);
	p = *head;
	*head = temp = NULL;
	while (p)
	{
		temp = p->next;
		p->next = *head;
		*head = p;
		p = temp;
	}
	return (*head);
}
