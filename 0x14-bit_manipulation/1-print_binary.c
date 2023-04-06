#include <stdio.h>
#include "main.h"
/**
 * print_binary - function that prints the binary representation of a number.
 * @n: number to convert into binary representation
 *
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n / 2);
	}
	_putchar((n % 2) + '0');
}

