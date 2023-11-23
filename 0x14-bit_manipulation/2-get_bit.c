#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * get_bit - returns the value of a bit for a index variabl.
 * @n: number to scan.
 * @index: bit to return.
 *
 * Return: bit.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 64)
	{
		return (-1);
	}

	/*int bit = (n >> index) & 1;*/

	return ((n >> index) & 1);
}
