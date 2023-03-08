#include "main.h"
#include <math.h>

/**
 * is_divisible - Makes possible to evaluate from 1 to n
 * @n: same number as n
 * @i: number that iterates from 1 to n
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno.
 */

int is_divisible(int n, int i)
{
	if (i > _sqrt_recursion(n))
	{
		return (0);
	}
	else if (n % i == 0)
	{
		return (1);
	}
	else
	{
		return (is_divisible(n, i + 1));
	}
}
/**
 * is_prime_number - checks if a number is prime
 * @n: Number Integer
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (!is_divisible(n, 2));
	}
}
