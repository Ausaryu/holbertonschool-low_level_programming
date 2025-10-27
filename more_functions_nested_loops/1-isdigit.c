#include <stdio.h>

/**
 * _isdigit - est chiffre
 * @c: the value to check
 * Return: 1 if c digit.
 */
int _isdigit(int c)
{
	int x;

	for (x = '0'; x <= '9'; x++)
	{
		if (x == c)
		{
			return (1);
		}
	}
	return (0);
}
