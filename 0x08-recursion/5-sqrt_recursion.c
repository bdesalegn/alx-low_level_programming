#include "main.h"
/**
 * _sqrt_recursion - return the sqrt of a natural number.
 * @n: must be natural number
 *
 *
 * Return: sqrt 0 if sqrt is not natural.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		return (sqrt_find(n, 1));
	}
}
/**
 * sqrt_find - find the sqrt of a number.
 * @n: must be natural number
 * @i: count iteration or number to be multiplied.
 *
 * Return: sqrt 0 if sqrt is natural number.
 */
int sqrt_find(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	else if (i * i > n)
	{
		return (-1);
	}
	else
	{
		return (sqrt_find(n, i + 1));
	}

