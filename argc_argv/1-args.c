#include <stdio.h>
#include <unistd.h>
void format_int(int n);

/**
 * main - print the number of argument
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{	
	(void)argv;
	format_int(argc - 1);
	write(1, "\n", 1);

	return (0);
}

/**
 * format_int - print number superior to ten
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Nothing.
 */
void format_int(int n)
{
	int printed;

	if (n >= 10)
	{
		printed = ((n % 10) + '0');

		format_int(n / 10);
		write(1, &printed, 1);
	}
	else
	{
		printed = (n + '0');

		write(1, &printed, 1);
	}
}
