#include <stdio.h>
#include "calc.h"
#include "function_paointer.h"
/**
* get_op_func - a  function that selects the correct function
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
	while (ops[i].op)
	{
		if (*(ops[i].op) == *s)
		{
			return (ops[i].f);
		}
	     i++;
	}

	return (0);
}