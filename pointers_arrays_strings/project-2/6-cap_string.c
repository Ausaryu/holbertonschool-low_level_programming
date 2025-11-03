#include "main.h"
#include <stdio.h>

/**
 * cap_string - capitalize all word in a string
 * @n: the string to capitalize
 *
 * Return: the string fixed.
 */
char *cap_string(char *n)
{
	int i = 0;
	int do_maj = 1;

	while (n[i] != '\0')
	{
		if (n[i] >= 'a' && n[i] <= 'z' && do_maj == 1)
		{
			n[i] -= 32;
			do_maj = 0;
		}
		else
		{
			if (n[i] == ' ' || n[i] == ',' || n[i] == ';'
			|| n[i] == '\t' || n[i] == '\n'
			|| n[i] == '.' || n[i] == '!' || n[i] == '?'
			|| n[i] == '"' || n[i] == '(' || n[i] == ')'
			|| n[i] == '{' || n[i] == '}')
			{
				do_maj = 1;
			}
			else
			{
				do_maj = 0;
			}
		}
		i++;
	}

	return (n);
}
