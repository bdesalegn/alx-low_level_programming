#include "function_pointers.h"
#include <stdio.h>
/*
 * int_index - initializes the variable
 *
 * @array: array elements comapre.
 * @size: size of an array.
 * @cmp: pointer to the function compare values
 * Return: index of array
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}
