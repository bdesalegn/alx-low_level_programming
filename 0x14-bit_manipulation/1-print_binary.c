#include <stdio.h>
#include "main.h"

void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);

	while (mask)
	{
		if (n & mask)
		{
			printf("1");
		}
		else
		{
			printf("0");
		}
		mask >>= 1;
	}
	printf("\n");
}

