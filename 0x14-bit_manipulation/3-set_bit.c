#include "main.h"
/**
 * set_bit - sets a value of a bit to 1
 * @n: unsigned long int input pointer
 * @index: type unsigned int
 * Return: 1 if working -1 if not working
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n |= 1 << index;
	return (1);
}
