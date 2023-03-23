#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - calculate arthimetic operatios
 * @argc: arguments count
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
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);

	op_func = get_op_func(argv[2]);

	if (op_func == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((num2 == 0) || (num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}
	result = op_func(a, b);
	printf("%d\n", result);
	return (0);
}
