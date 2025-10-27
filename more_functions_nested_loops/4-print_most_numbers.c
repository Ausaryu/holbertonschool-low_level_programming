#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - est chiffre
 *
 *
 */
void print_most_numbers(void)
{
	int x;

	for (x = '0'; x <= '9'; x++)
	{
		if (x != '2' && x != '4')
		{
			_putchar(x);
		}
	}
	_putchar('\n');
}
