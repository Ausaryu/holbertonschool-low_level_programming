#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes a node at a given index in a list.
 * @head: Pointer to the pointer to the head of the list.
 * @index: Index of the node to delete (starting at 0).
 *
 * Return: 1 if successful, -1 if it fails.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current, *to_delete;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	current = *head;

	if (index == 0)
	{
		to_delete = *head;
		*head = to_delete->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(to_delete);
		return (1);
	}

	for (i = 0; current != NULL && i < index - 1; i++)
		current = current->next;

	if (current == NULL || current->next == NULL)
		return (-1);

	to_delete = current->next;
	current->next = to_delete->next;

	if (to_delete->next != NULL)
		to_delete->next->prev = current;

	free(to_delete);

	return (1);
}
