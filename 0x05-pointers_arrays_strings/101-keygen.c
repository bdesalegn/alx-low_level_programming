#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(void)
{
	char pass_Gen[100];
	int i;

	srand(time(NULL));
	for (i = 0; i < 100; i++)
	{
		pass_Gen[i] = rand() % 94 + 33;
	}
	printf("%s\n", pass_Gen);
	return (0);
}
