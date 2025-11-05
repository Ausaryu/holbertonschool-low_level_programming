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
	char args, args10, args100;

	(void)argv;
	if (argc >= 100)
	{
		args100 = (((argc - 1) / 100) + '0');
		args10 = ((((argc - 1) / 10) % 10) + '0');
		args = (((argc - 1) % 10) + '0');

		write(1, &args100, 1);
		write(1, &args10, 1);
		write(1, &args, 1);
	}
	else if (argc >= 10)
	{
		args10 = (((argc - 1) / 10) + '0');
		args = (((argc - 1) % 10) + '0');

		write(1, &args10, 1);
		write(1, &args, 1);
	}
	else
	{
		args = (argc - 1 + '0');

		write(1, &args, 1);
	}
	write(1, "\n", 1);

	return (0);
}

