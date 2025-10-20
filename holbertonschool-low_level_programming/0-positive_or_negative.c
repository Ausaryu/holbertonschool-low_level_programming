#include <stdlib.h>
#include <time.h>

/**
 *main - ouais
 *
 *
 *
 * Return: ouais
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if n < 0
	{
		printf("%d is negative", n);
	}
	else
	{
		printf("%d is positive")
	}

	return (0);
}
