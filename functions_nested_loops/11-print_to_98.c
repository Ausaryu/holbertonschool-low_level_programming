#include <stdio.h>
#include "main.h"

/**
 *print_to_98 - ouais
 *@n: the first number to 98
 *Return: le result
 */
void print_to_98(int n)
{
	int x;

	if (n < 98)
	{
		for (x = n; x < 98; x++)
		{
			printf("%d", x);
			printf(",");
			printf(" ");
		}
	}
	else if (n > 98)
	{
		for (x = n; x > 98; x--)
		{
			printf("%d", x);
			printf(",");
			printf(" ");
		}
	}
	printf("98\n");
}
