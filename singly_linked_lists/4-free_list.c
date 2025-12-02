#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_list - Frees a list_t list.
 * @head: Pointer to the head of the list.
 */
void free_list(list_t *head)
{
	list_t *h = head;

	if (head == NULL)
	{
		return;
	}

	while (h != NULL)
	{
		free(head->str);
		h = h->next;
		free(head);
		head = h;
	}
}
