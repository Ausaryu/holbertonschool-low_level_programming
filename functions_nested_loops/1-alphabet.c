#include <stdio.h>
#include "main.h"

/**
 *print_alphabet - ouais
 *
 *Return: l'alphabet frèe
 */
void print_alphabet(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
}
