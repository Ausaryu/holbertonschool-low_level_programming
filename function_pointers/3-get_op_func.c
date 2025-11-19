#include <stdio.h>
#include "3-calc.h"

/**
 * get_op_func - Selects the correct function to perform an operation.
 * @s: Operator passed as a string.
 *
 * Return: Pointer to the function corresponding to the operator,
 *         or NULL if no valid operator is found.
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	if (s[1] == '\0')
	{
		i = 0;
		while (ops[i].op != NULL)
		{
			if (*(ops[i].op) == *s)
				return (ops[i].f);
			i++;
		}
	}
	return (NULL);
}
