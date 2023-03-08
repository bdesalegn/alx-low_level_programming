#include "main.h"
/**
 * factorial - gets factorial of n
 * @n: positive integer or 0
 * Return : On sucess 1. 
 * 
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);  /*if  n is negative */
	}
	else if (n == 0)
	{
		return (1);  /* because : 0! = 1*/
	}
	else
	{
		int i, fact = 1;

		for (i = 1; i <= n; ++i)
		{
			fact *= i;
				
		}
		return (fact);
	}
}
