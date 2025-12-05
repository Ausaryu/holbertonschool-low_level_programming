#include "hash_tables.h"

/**
 * hash_table_set - Adds or updates an element in a hash table
 * @ht: The hash table
 * @key: The key (cannot be an empty string)
 * @value: The value associated with the key (must be duplicated)
 *
 * Return: 1 on success, 0 on failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    unsigned long int index;
    hash_node_t *node, *tmp;

    /* Check for invalid input */
    if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
        return (0);

    /* Get index */
    index = key_index((const unsigned char *)key, ht->size);
    tmp = ht->array[index];

    /* Check if the key already exists → update the value */
    while (tmp != NULL)
    {
        if (strcmp(tmp->key, key) == 0)
        {
            char *new_value = strdup(value);
            if (new_value == NULL)
                return (0);

            free(tmp->value);
            tmp->value = new_value;
            return (1);
        }
        tmp = tmp->next;
    }

    /* If the key doesn't exist → create a new node */
    node = malloc(sizeof(hash_node_t));
    if (node == NULL)
        return (0);

    node->key = strdup(key);
    node->value = strdup(value);
    if (node->key == NULL || node->value == NULL)
    {
        free(node->key);
        free(node->value);
        free(node);
        return (0);
    }

    /* Insert at beginning of the list (to handle collisions) */
    node->next = ht->array[index];
    ht->array[index] = node;

    return (1);
}
