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
	int num, num1, num2;
	/* prints all possible combinations of single-digit numbers. */
	for (num = 0; num < 8; num++)
	{
		for (num1 = 0; num1 < 9; num1++)
		{
			for (num2 = 0; num2 < 10; num2++)
			{
				putchar(num % 10 + '0');
				putchar(num1 % 10 + '0');
				putchar(num2 % 10 + '0');
				if (num == 7 && num1 == 8 && num2 == 9)
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
