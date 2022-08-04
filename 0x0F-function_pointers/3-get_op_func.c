#include <stdio.h>
#include "3-calc.h"

/**
* get_op_func - function to get op functions
* @s: operator
*
* Return: operator or NULL
**/

int (*get_op_func(char *s))(int, int)
{
	int i = 0;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	while (ops[i].op)
	{
		if (strcmp(ops[i].op, s) == 0)
		return (ops[i].f);

		i++;
	}

	return (NULL);
}
