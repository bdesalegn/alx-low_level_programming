#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long int i, a = 1, b = 2, c;

	printf("%lu %lu ", a, b);
	for (i = 3; i <= 50; i++)
	{
		c = a + b;
		printf(", %lu ", c);
		a = b;
		b = c;
	}
	printf("\n");
	return (0);
}
