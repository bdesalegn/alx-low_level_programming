#include "function_pointers.h"
#include <stdlib.h>
/*
 * print_name - print the given name nitializes a variable
 * @name: pointer char variable
 * @f: pointer to function
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
	{
		return;
	}
	if (f == NULL)
	{
		return;
	}
	f(name);
}
