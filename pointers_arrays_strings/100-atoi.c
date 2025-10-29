#include "main.h"
#include <stdio.h>

/**
 * _atoi - convert string to int
 * @s: 
 * Return: int
 */
int _atoi(char *s)
{
	char *p = s;
	int sign = 1;
	long result = 0;

	while (*p < '0' || *p > '9')
	{
		if (*p == '\0')
			break;
		else if (*p == '-')
		{
			sign *= -1;
			p++;
		}
		else
			p++;
	}

	while (*p >= '0' && *p <= '9')
	{
		result = result * 10 + (*p - '0');
		p++;
	}
	return (int)(sign * result);
}
