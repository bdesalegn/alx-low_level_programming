#include "main.h"
/**
 * factorial - gets factorial of n
 * @n: positive integer or 0
 * return : On sucess fact, -1 for negative , 1 for 0
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
		int fact = 1;

		for (int i = 1; i <= n; ++i)
		{
			fact *= i;
		}
		return (fact);
	}
}
