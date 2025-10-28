#include "main.h"
#include <unistd.h>

/**
 * _puts - prints a string
 * @str: the string to print
 *
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
	write(1, "\n", 1);
}
