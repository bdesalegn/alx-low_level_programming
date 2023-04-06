#include"main.h"
/**
 * flip_bits - Returns the number of flipped bits
 * @n: unsigned long int input pointer
 * @m: unsigned long int position of unit
 * Return: flipped_bit
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int bits = 0;
	unsigned long int xor;

	xor = n ^ m;

	while (xor)
	{
		bits += xor & 1;
		xor >>= 1;
	}

	return (bits);
}
