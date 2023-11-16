#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: head of the singly linked list
 * Return: the number of nodes
*/
size_t print_list(const list_t *h)
{
	size_t count = 0;
	list_t *s = h;

	while (s)
	{
		printf("[%d] %s", s->len, s->str);
		s = s->next;
		count++;
	}
	return (count);
}
