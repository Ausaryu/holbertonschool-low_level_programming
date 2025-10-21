#include <stdio.h>
#include "main.h"

/**
 *main - ouais
 *
 *Return: l'alphabet frèe
 */
int main(void)
{
	int x;
	int y;

	for (y = 0; y < 10; y++)
	{
		for (x = 'a'; x <= 'z'; x++)
		{
			_putchar(x);
		}
		_putchar('\n');
	}

	return (0);
}
