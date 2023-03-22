#include <stdio.h>
#include "function_pointers.h"
/*
 * print_name - print the given name 
 * @name: pointer char variable
 * @f: pointer to function 
 * Return: Always Sucess
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	f(name);
}
