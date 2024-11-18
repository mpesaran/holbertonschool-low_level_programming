#include "3-calc.h"
#include <stddef.h>
/**
 * get_op_func - returns function related to what user entered as arg
 * @s: operator passed as an argument
 *
 * Return: pointer to a function, Null if s is invalid
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
	int i = 0;

	while (ops[i].op)
	{
		if (*ops[i].op == *s)
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
