#include "main.h"
#include <unistd.h>
int _sqrt_aux(int n, int i);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number
 * Return: the natural square root of a number
 */
int _sqrt_recursion(int n)
{
	int i = 1;

	return (_sqrt_aux(n, i));
}

/**
 * _sqrt_aux - work with _sqrt_recursion
 * @n: the number
 * @i: the square root to compare
 * Return: the natural square root of n
 */
int _sqrt_aux(int n, int i)
{
	int sqrt_i;

	sqrt_i = i * i;
	if (sqrt_i == n)
	{
		return (i);
	}
	else if (sqrt_i > n)
	{
		return (-1);
	}
	return (_sqrt_aux(n, i + 1));
}
