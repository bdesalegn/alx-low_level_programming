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
	int num;
	/*print single digit numbers */
	for (num = 0; num < 10; num++)
	{
		putchar("%d", num);
	}
	putchar('\n');
	return (0);
}
