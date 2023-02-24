#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always 0 (sucess)
 */
int main(void)
{
	unsigned long int num = 612852475143;
	unsigned long int prime_num;

	prime_num = 3;
	while (prime_num < num / 2)
	{
		if ((num % prime_num) == 0)
		{
			if ((prime_num % 3) == 2)
				printf(",%lu ", prime_num);
		}

		prime_num + = 2;
	}

	putchar('\n');
	return (0);
}
