#include <stdio.h>

/**
 * _isupper - est majuscule
 * @c: the valleur to check
 * Return: 1 if c uppercase.
 */
int _isupper(int c)
{
	int x;

	for (x = 'A'; x <= 'Z'; x++)
	{
		if (x == c)
		{
			return (1);
		}
	}
	return (0);
}
