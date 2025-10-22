#include <stdio.h>
#include "main.h"

/**
 *print_sign - ouais
 *@n: the character to check
 *Return: soit i si +i or -i si -i
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
