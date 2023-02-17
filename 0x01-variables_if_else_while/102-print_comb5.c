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
	int num, num1;
	/* prints all possible combinations of single-digit numbers. */
	for (num = 0; num < 98; num++)
	{
		for (num1 = num + 1; num1 < 99; num1++)
		{
			putchar(num + '0');
			putchar(num + '0');
			putchar(' ');
			putchar(num1 + '0');
			putchar(num1 + '0');
			if (num == 98 && num1 == 99)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
