#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b: positive intiger
 * Return: Null aand return ptr.
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		printf("malloc Failed\n");
		exit(98);
	}
	return (ptr);
}
