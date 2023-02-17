#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int number;
	/*print single digit numbers */
	for (number = 0; number < 10; number++)
	{
		printf("%d", number);
	}
	putchar('\n');
	return (0);
}
