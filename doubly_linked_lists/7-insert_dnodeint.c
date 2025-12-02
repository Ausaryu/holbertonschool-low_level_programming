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
	dlistint_t *temp;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->prev = NULL;
	new->n = n;
	new->next = NULL;

	while (idx != 1)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
		idx--;
	}
	new->prev = head;
	temp = head->next;
	head->next = new;

	new->next = temp;
	temp->prev = new;

	return (head);

}
