#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: head pointer of list
*/

void free_dlistint(dlistint_t *head)
{
    while (head->next)
    {
        head = head->next;
        free(head->prev);
    }
    free (head);
}
