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
	int z;

	for (y = 0; y < 10; y++)
	{
		for (z = 0; z <= 1; z++)
		{
			for (x = '0'; x <= '9'; x++)
			{
				if (z == 1 && x > '4')
					continue;
				else if (z == 1)
					_putchar('1');
				_putchar(x);
			}
		}
	_putchar('\n');
	}
}
