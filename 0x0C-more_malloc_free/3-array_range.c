#include <stdlib.h>
#include "main.h"
/**
 * array_range - Function create and array of integers.
 * @min: starting number.
 * @max: ending number.
 *
 * Return: pointer to the area in memory.
 */
int *array_range(int min, int max)
{
	int *arr, size = max - min + 1;

	if (min > max)
	{
		return (NULL);
	}
	arr = (int *)malloc(size * sizeof(int));
	if (arr == NULL)
	{
		return (NULL);
	}
	for (int i = 0; i < size; i++)
	{
		arr[i] = min + i;
	}
	return (arr);
}
