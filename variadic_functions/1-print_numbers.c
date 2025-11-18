#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - Prints numbers separated by a given string.
 * @separator: String printed between numbers.
 * @n: Number of integers passed.
 *
 * Return: Nothing.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		if (separator != NULL && i + 1 != n)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
