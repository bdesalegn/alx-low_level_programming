#include "main.h"
/**
 * _pow_recursion - calculat x the power of y
 * @x: the base variable
 * @y: exponents
 *
 *Return: the value of x^^y
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	/*negative exponent*/
	else if (y < 0)
	{
		return (-1);
	}
	/* recursive case*/
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
