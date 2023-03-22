#include "function_pointers.h"
#include <stdio.h>
/*
 * array_iterator - print  as a parameter on each element of an array
 * @size: the size of the array
 * @action: a pointer to the function
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
