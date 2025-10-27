#include <stdio.h>
#include "main.h"

/**
 * more_numbers - est chiffre
 *
 *
 */
void more_numbers(void)
{
	int x;
	int y;

	for (y = 0; y < 10; y++)
	{
		for (x = '0'; x <= '9'; x++)
		{
			_putchar(x);
		}
		for (x = '0'; x <= '4'; x++)
		{
			_putchar('1');
			_putchar(x);
		}
	_putchar('\n');
	}
}
