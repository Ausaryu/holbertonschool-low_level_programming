#include <stdio.h>
#include <stdlib.h>

/**
 * main - print all the of argument
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 or 1 if error.
 */
int main(int argc, char *argv[])
{
	int i;
	long add;
	char *endptr;

	add = 0;
	for (i = 1; i < argc; i++)
	{
		add += strtol(argv[i], &endptr, 10);
		if (*endptr != '\0')
		{
		printf("Error\n");
		return (1);
		}
	}

	printf("%ld\n", add);

	return (0);
}
