#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_dlistint - Frees a dlistint_t list.
 * @head: Pointer to the head of the list.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *h = head;

	if (head == NULL)
	{
		return;
	}

	while (h != NULL)
	{
		h = h->next;
		free(head);
		head = h;
	}
}
