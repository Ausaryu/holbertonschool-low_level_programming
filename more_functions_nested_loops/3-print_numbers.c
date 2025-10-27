#include <stdio.h>
#include "main.h"

/**
 * print_numbers - est chiffre
 *
 *
 */
void print_numbers(void)
{
	int x;

	for (x = '0'; x <= '9'; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
}
