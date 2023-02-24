#include "main.h"

/**
 * more_numbers - a function that prints 10 times the numbers, from 0 to 14.
 *
 * Return: 0-14 x10 followed by new line
 */
void more_numbers(void)
{
	int nums, count;

	for (count = 0; count < 10; count++)
	{
		for (nums = 0; nums <= 14; nums++)
		{
			if (nums >= 10)
			{
				_putchar((nums / 10) + '0');
			}
			_putchar((nums % 10) + '0');
		}
		_putchar('\n');
	}
}
