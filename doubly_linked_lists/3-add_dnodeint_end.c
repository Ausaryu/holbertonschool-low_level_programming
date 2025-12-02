#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of a dlistint_t list.
 * @head: Pointer to the pointer to the head of the list.
 * @n: Value to store in the new node.
 *
 * Return: Address of the new element, or NULL if it fails.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *h = *head;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->prev = NULL;
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		(*head) = new;
	}
	else
	{
		while (h->next != NULL)
		{
			h = h->next;
		}
		new->prev = h;
		h->next = new;
	}

	return (new);
}
