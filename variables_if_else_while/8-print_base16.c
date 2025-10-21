#include <stdio.h>

/**
 *main - ouais
 *
 *Return: l'alphabet frère
 */
int main(void)
{
	int x;

	for (x = '0'; x <= 'f'; x++)
	{
		if (x > '9' && x < 'a')
		{
			continue;
		}
		putchar(x);
	}
	putchar('\n');

	return (0);
}
