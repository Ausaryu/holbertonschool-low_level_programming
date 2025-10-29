#include "main.h"
#include <stdio.h>

/**
 * string_toupper - changes all lowercase letters
 *of a string to uppercase
 * @n: the string to convert
 *
 * Return: the string fixed.
 */
char *cap_string(char *n)
{
	int i = 0;
	int do_maj = 0;

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
