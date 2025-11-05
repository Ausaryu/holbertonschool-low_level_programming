#include <stdio.h>
#include <unistd.h>

/**
 * main - print his name
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i = 0;

	(void)argc;
	while (argv[0][i] != '\0')
	{
		write(1, &argv[0][i], 1);
		i++;
	}
	write(1, "\n", 1);

	return (0);
}
