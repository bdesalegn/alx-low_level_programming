#include <stdio.h>
/**
 * print_to_98 - prints all natural numbers from n to 98.
 * * @n: print natural number number
 * return: nothing
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (int i = n; i <= 98; i++)
		{
			_putchar("%d", i)
			if (i != 98)
			{
				_putchar(", ");
			}
		}
	}
	else
	{
		for (int i = n; i >= 98; i--)
		{
			_putchar("%d", i);
			if (i != 98)
			{
				_putchar(", ");
			}
		}
	}
	_putchar("\n");
}
