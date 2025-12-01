#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - Prints anything based on a format string.
 * @format: List of types of arguments passed (c, i, f, s).
 */

void print_all(const char * const format, ...)
{
	va_list ap;
	unsigned int i = 0, j;
	printer_t funcs[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
	};
	char *sep = "";

	va_start(ap, format);

	while (format && format[i])
	{
		j = 0;

		while (funcs[j].type)
		{
			if (*(funcs[j].type) == format[i])
			{
				printf("%s", sep);
				funcs[j].f(ap);
				sep = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(ap);
}


/**
 * print_char - Prints a char from a va_list.
 * @ap: va_list containing the char to print.
 */
void print_char(va_list ap)
{
	printf("%c", va_arg(ap, int));
}

/**
 * print_int - Prints an int from a va_list.
 * @ap: va_list containing the int to print.
 */
void print_int(va_list ap)
{
	printf("%d", va_arg(ap, int));
}

/**
 * print_float - Prints a float from a va_list.
 * @ap: va_list containing the float to print.
 */
void print_float(va_list ap)
{
	printf("%f", va_arg(ap, double));
}

/**
 * print_string - Prints a string from a va_list.
 * @ap: va_list containing the string to print.
 *
 * Description: Prints (nil) if the string is NULL.
 */
void print_string(va_list ap)
{
	char *a = va_arg(ap, char*);

	if (a == NULL)
	{
		printf("(nil)");
		return;
	}

	printf("%s", a);
}
