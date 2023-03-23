#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
/*
 * print_name - print the name of  students.
 * @name: pointer char variable
 * @f: pointer to function
 * Return: Always  nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
