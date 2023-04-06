#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * get_bit - function that returns the value of a bit at a given index.
 * @n: number to scan.
 * @index: bit to return.
 *
 * Return: Mask.
 */


int get_bit(unsigned long int n, unsigned int index)
{
	int mask;
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	return ((n >> index) & 1);
}
