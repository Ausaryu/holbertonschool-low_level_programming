#include <stdio.h>
#include <unistd.h>
void _puts(char *str);

/**
 * main - print the number of argument
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		_puts(argv[i]);
	}

	return (0);
}

/**
 * _puts - prints a string
 * @str: the string to print
 *
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
	write(1, "\n", 1);
}

