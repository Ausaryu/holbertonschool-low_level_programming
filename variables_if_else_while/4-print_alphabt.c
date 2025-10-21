#include <stdio.h>

/**
 *main - ouais
 *
 *Return: l'alphabet frère
 */
int main(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
	{
		if ( x == 'q' || x == 'e' )
		{
		continue;
		}
		putchar(x);
	}
	putchar('\n');

	return (0);
}
