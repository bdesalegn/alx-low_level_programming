#include "main.h"
/**
 * is_prime_number - checks if a number is prime
 * @n: Number Integer
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int is_prime_number(int n)
{
	int i, temp = 0;

	for (i = 2; i <= n/ 2; i++)
	{
        /* check if num is divisible by any number.*/
		if (n % i == 0)
		{
			temp++;
			break;
		}
	}
	/* check for the value of temp and num.*/
	if (temp == 0 && n != 1)
	{
		return (n);
	}
	else
	{
		return (n);
	}
	return (0);
}
