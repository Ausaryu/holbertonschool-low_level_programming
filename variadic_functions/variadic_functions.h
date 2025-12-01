#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>

/**
 * struct printer - Mapping d’un type à sa fonction d’impression
 * @type: le caractère correspondant au type
 * @f: pointeur vers la fonction qui gère ce type
 */
typedef struct printer
{
	char *type;
	void (*f)(va_list ap);
} printer_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

void print_char(va_list ap);
void print_int(va_list ap);
void print_float(va_list ap);
void print_string(va_list ap);

#endif
