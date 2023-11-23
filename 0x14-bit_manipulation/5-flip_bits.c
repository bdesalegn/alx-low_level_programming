#include"main.h"
/**
 * flip_bits - Returns the number of flipped bits
 * @n: unsigned long int type
 * @m: unsigned long int type
 * Return: flipped_bit
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int flipped_bits = 0;
	unsigned long int xor;

	xor = n ^ m;

	while (xor)
	{
		flipped_bits += xor & 1;
		xor >>= 1;
	}

	return (flipped_bits);
}
