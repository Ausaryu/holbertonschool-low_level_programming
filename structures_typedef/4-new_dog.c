#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"
char *_strcpy(char *dest, char *src);
static unsigned int _strlen(char *s);

/**
 * new_dog - Creates a new dog and stores copies of its name and owner.
 * @name: Name of the dog.
 * @age: Age of the dog.
 * @owner: Name of the owner.
 *
 * Return: Pointer to the new dog, or NULL on failure.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;
	unsigned int len_name, len_owner;

	new = malloc(sizeof(dog_t));
	if (new == NULL)
		return (NULL);

	new->name = NULL;
	new->owner = NULL;
	new->age = age;

	if (name != NULL)
	{
		len_name = _strlen(name);
		new->name = malloc(len_name + 1);
		if (new->name == NULL)
		{
			free(new);
			return (NULL);
		}
		_strcpy(new->name, name);
	}

	if (owner != NULL)
	{
		len_owner = _strlen(owner);
		new->owner = malloc(len_owner + 1);
		if (new->owner == NULL)
		{
			free(new->name);
			free(new);
			return (NULL);
		}
		_strcpy(new->owner, owner);
	}

	if (new->name == NULL || new->owner == NULL)
	{
		free(new->name);
		free(new->owner);
		free(new);
		return (NULL);
	}

	return (new);
}

/**
 * _strcpy - Copies the string pointed to by src into dest.
 * @dest: Destination buffer.
 * @src: Source string.
 *
 * Return: Pointer to dest, or NULL if dest or src is NULL.
 */
char *_strcpy(char *dest, char *src)
{
	unsigned int i = 0;

	if (dest == NULL || src == NULL)
		return (NULL);
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * _strlen - Returns the length of a string.
 * @s: String to measure.
 *
 * Return: Length of the string, or 0 if s is NULL.
 */
static unsigned int _strlen(char *s)
{
	unsigned int len = 0;

	if (s == NULL)
		return (0);
	while (s[len] != '\0')
		len++;
	return (len);
}
