#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>
/**
* get_op_func - a function that selects the correct function
* @s: operator passed as argument to the program
*
* Return: a pointer to the function returnt to ops.
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

	i = 0;
	while (i < 6)
	{
		if (ops[i].op[0] == s[0])
		{
			return (ops[i].f);
		}
		i++;
	}
	printf("Error\n");
	return (0);
}
