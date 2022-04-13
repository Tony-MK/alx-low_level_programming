#include <stddef.h>
#include "3-calc.h"

/**
 * get_op_func - Finds the operation function responsible for the operator sign
 * @s: Operator string
 * Return: Pointer to the operaion function. Otherwise, NULL.
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};
	int i;

	i = 0;
	while (ops[i].op && s)
	{
		if (*(ops[i].op) == *s)
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
