#include "function_pointers.h"
#include <stdio.h>
/*
 * int_index - search integer number.
 * @array: array elements comapre.
 * @size: size of an array.
 * @cmp: pointer to the function compare values
 * Return: index of array
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
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
