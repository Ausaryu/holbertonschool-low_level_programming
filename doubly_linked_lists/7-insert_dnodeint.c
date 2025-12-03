#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given index in
 *							 a dlistint_t list.
 * @h: Pointer to the pointer to the head of the list.
 * @idx: Index where the new node should be inserted (starting at 0).
 * @n: Value to store in the new node.
 *
 * Return: Address of the new node, or NULL if it fails or index is invalid.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new;
	dlistint_t *head = *h;
	unsigned int i = 1;

	if (h == NULL)
		return (NULL);

	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}

	while (i < idx)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
		i++;
	}
	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	new->next = head->next;
	new->prev = head;

	if (head->next != NULL)
		head->next->prev = new;

	head->next = new;

	return (new);

}
