#include "main.h"
#include <unistd.h>

/**
 * _pow_recursion - returns the factorial of a given number
 * @x: the number
 * @y: the power
 * Return: the factorial of a given number
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);
	return (x * _pow_recursion(x, y - 1));
}
