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
	long int y;
	
	y = (long int)i;
	if (i < 0)
	{
		y = -i;
	}
	else
	{
		y = i;
	}

	x = y % 10;
	_putchar(x + '0');

	return (x);
}
