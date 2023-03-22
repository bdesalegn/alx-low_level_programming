#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
#include "function_pointers.h"
/**
 * main - check the program
 * @argc: arguments cant
 * @argv: vector arguments
 * Return: 0 if false, something else otherwise.
 */
int main(int argc, char **argv)
{
	int a, b;
	int result;
	int (*op_func)(int, int);

	if (argc != 4)
	{
		printf("Error: incorrect number of arguments\n");
		return (EXIT_FAILURE);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	op_func = get_op_func(argv[2]);

	if (op_func == NULL)
	{
		printf("Error: invalid operator\n");
		return (EXIT_FAILURE);
	}
	result = op_func(a, b);
	printf("%d\n", result);
	return (0);
}
