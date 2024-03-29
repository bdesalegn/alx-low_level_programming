#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
/*
 * print_name - print the name of students.
 * @name: pointer char variable
 * @f: pointer to function
 *
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
