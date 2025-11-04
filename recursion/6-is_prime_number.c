#include "main.h"
#include <unistd.h>
int aux_prime(int n, int i);

/**
 * is_prime_number - test if n is prime number
 * @n: the number
 * Return: 1 if the input integer is a prime number,
 *			otherwise return 0
 */
int is_prime_number(int n)
{
	return (aux_prime(n, 2));
}


/**
 * aux_prime - aux for is_prime_number
 * @n: the number
 * @i: index
 * Return: 1 if the input integer is a prime number,
 *			otherwise return 0
 */
int aux_prime(int n, int i)
{
	if (n <= 1)
		return (0);
	else if (n % i == 0)
		return (0);
	else if (n < i * i)
		return (1);
	return (aux_prime(n, i + 1));
}
