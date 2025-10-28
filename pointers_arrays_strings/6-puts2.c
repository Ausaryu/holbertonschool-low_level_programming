#include "main.h"
#include <unistd.h>

/**
 * puts2 - print every other character of a string
 * @str: the string to print
 *
 */

void puts2(char *str)
{
	char *x = str;

	while (*x != '\0')
	{
		write(1, x, 1);
		x += 2;
	}
	write(1, "\n", 1);
}
