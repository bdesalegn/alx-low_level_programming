#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i, a = 1, b = 2, c;

	printf("%d %d ", a, b);
	for (i = 3; i <= 51; i++)
	{
		c = a + b;
		printf("%d ", c);
		printf(',');
		printf(' ');
		a = b;
		b = c;
	}
	printf("\n");
	return (0);
}
