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
	int num, count;
	/* prints all possible combinations of single-digit numbers. */
	for (num = 0; num < 9; num++)
	{
		count = n + 1;
		do {
			putchar(num + '0');
			putchar(counti + '0');
			if (num < 8)
			{	putchar(',');
				putchar(' ');
			}
			count++;
		} while (count < 10);
	}
	putchar('\n');
	return (0);
}
