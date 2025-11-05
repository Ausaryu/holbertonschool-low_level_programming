#include <stdio.h>
#include <unistd.h>
void _puts(char *str);
int convert_int(char *n);
void format_int(int n);

/**
 * main - print all the of argument
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 or 1 if error.
 */

int main(int argc, char *argv[])
{
	int mul;
	if (argc != 3)
	{
		puts("Error");
		return (1);
	}
	mul = convert_int(argv[1]) * convert_int(argv[2]);
	format_int(mul);
	write(1, "\n", 1);
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

int convert_int(char *n)
{
	int sign = 1;

	if (n[0] == '-')
	{	
		sign *= -1;
		return (convert_int(n + 1) * sign);
	}
	else if (n[0] >= '0' && n[0] <= '9')
		return (((convert_int(n + 1) * 10) + n[0] - '0'));
	else if (n[0] == '\0')
		return (0);
	else
		return(1);
}

void format_int(int n)
{
	int printed;

	if (n < 0)
    {
        write(1, "-", 1);
        n = -n;
    }

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

