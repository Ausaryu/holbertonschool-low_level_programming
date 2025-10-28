#include "main.h"
#include <unistd.h>

/**
 * rev_string - reverse a string
 * @s: the string to reverse
 *
 */

void rev_string(char *s)
{
	char *x = s;
	int count = 0;
	char y[100];

	while (*x != '\0')
	{
		y[count] = *x;
		count++;
		x++;
	}

	while (count != 0)
	{
		count--;
		*s = y[count];
		s++;
	}
}
