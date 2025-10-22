#include <stdio.h>
#include "main.h"

/**
 *print_last_digit - ouais
 *@i: the character to check
 *Return: le dernier digit
 */
int print_last_digit(int i)
{
	long int x;

	if (i < 0)
	{
		x = -(i % 10);
	}
	else
	{
		x = i % 10;
	}

	_putchar(x + '0');

	return (x);
}
