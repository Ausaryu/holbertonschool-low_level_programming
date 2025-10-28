#include "main.h"
#include <unistd.h>

/**
 * print_rev - prints a string in reverse
 * @str: the string to print
 *
 */

void print_rev(char *str)
{
	char *x = str;
	int count = 0;

	while (*x != '\0')
	{
		count++;
		x++;
	}

	while (count >= 0)
	{
		write(1, x, 1);
		count--;
		x--;
	}
	write(1, "\n", 1);
}
