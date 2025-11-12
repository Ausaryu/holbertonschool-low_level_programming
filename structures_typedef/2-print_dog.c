#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Prints the contents of a struct dog.
 * @d: Pointer to the dog struct to print.
 *
 * Description: If d or any of its elements are NULL, prints (nil)
 *              for those elements. Prints nothing if d is NULL.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name != NULL)
		printf("Name: %s\n", d->name);
	else
		printf("Name: (nil)");
	printf("Age: %.6f\n", d->age);
	if (d->owner != NULL)
	printf("Owner: %s\n", d->owner);
	else
		printf("Owner: (nil)");
}
