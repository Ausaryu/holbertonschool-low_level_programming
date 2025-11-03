#include "main.h"
#include <unistd.h>

/**
 * puts_half - print every other character of a string
 * @str: the string to print
 *
 */

void puts_half(char *str)
{
	char *x = str;
	int count = 0;

	while (*x != '\0')
	{
		count++;
		x++;
	}

	str = str + ((count + 1) / 2);

	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
	write(1, "\n", 1);
}
