#include "main.h"
/**
 * factorial - return the factorial of a natural number.
 * @n: input natural number
 *
 * Return: the factorial.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);  /*if  n is negative */
	if (n == 0)
		return (1);  /* because : 0! = 1*/
	return (n * factorial(n - 1));
}
