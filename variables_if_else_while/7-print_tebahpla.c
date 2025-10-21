#include <stdio.h>

/**
 *main - ouais
 *
 *Return: l'alphabet frère
 */
int main(void)
{
	int x;

	for (x = 'z'; x >= 'a'; x--)
	{
		putchar(x);
	}
	putchar('\n');

	return (0);
}
