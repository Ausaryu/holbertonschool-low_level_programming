#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a list_t list.
 * @head: Pointer to the pointer to the head of the list.
 * @str: String to duplicate into the new node.
 *
 * Return: Address of the new element, or NULL if it fails.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;
	list_t *h = *head;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	while (str[len] != '\0')
		len++;
	new->len = len;
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
		h->next = new;
	}

	return (new);
}
