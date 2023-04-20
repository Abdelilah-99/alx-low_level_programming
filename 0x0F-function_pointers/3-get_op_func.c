#include "3-calc.h"
#include <stdlib.h>
#include <string.h>
/**
 * get_op_func - function bach nchecker w nab9a n3ayatt 3la les op
 * @s: hadi l op lii 3tanna w t9add tkuun ay char machi darori
 * op t9ed tkuun _ wlla @ wlla ()
 * Return: NULL or the operation ila kan dar operation
 * kanatt egalle l op
 *
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}};
	int i = 0;

	while (i < 5)
	{
		if (strcmp(s, ops[i].op) == 0)
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
