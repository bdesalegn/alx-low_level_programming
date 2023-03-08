#include "main.h"
/**
 * factorial - gets factorial of n
 * @n: input integer
 * Return : Always sucess (n+ factorial(n-1) or 1 error -1.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);  /*if  n is negative */
	if (n == 0)
		return (1);  /* because : 0! = 1*/
	return (n * factorial(n - 1));
}
