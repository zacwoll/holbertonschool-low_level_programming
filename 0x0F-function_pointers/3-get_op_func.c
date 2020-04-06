#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
  * get_op_func - switchboard file to match operation to function
  * @s: The operator passed in
  * Return: Pointer to function corresponding to operator
  */
int (*get_op_func(char *s))(int, int)
{
	/* op_t struct array */
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;
	/* match function to operator */
	i = 0;
	while (ops[i].op != NULL)
	{
		if (ops[i]->op == *s && s[1] == '\0')
			return (ops[i].f);
		i++;
	}
	/* operator not found */
	printf("Error\n");
	exit(99);
}
