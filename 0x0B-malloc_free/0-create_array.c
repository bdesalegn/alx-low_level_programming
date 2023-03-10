#include <stdlib.h>
#include "main.h"
/**
 * create_array - function that creates an array of chars, and initializes.
 * @size: positive integer
 * @c: Character array
 * Return: size of array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;
	/* Check for zero size input*/
	if (size == 0)
	{
		return (NULL);
	}
	/* Allocate memory for the array*/

	array = malloc(size * sizeof(char));

	if (array == NULL)
	{
	/* Failed to allocate memory*/
		return (NULL);
	}
	/* Initialize the array with the specified char*/
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
