#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a list_t list.
 * @head: Pointer to the pointer to the head of the list.
 * @str: String to duplicate into the new node.
 *
 * Return: Address of the new element, or NULL if it fails.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	while (str[len] != '\0')
		len++;
	new->len = len;
	new->next = *head;
	*head = new;

	return (new);
}
