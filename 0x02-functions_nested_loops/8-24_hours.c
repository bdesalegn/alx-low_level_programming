#include "main.h"

/**
 * jack_bauer - prints every minute of the day, starting from 00:00 to 23:59.
 *
 * Return: Return: 24 hour clock each minute
 */
void jack_bauer(void)
{
	int h, d, m, s;

	for (h = 0; h <= 2; h++)
	{
		for (d = 0; d <= 9; d++)
		{
			if ((h <= 1 && d <= 9) || (h <= 2 && d <= 3))
			{
				for (m = 0; m <= 5; m++)
				{
					for (s = 0; s <= 9; s++)
					{
						_putchar(h + '0');
						_putchar(d + '0');
						_putchar(58);
						_putchar(m + '0');
						_putchar(s + '0');
						_putchar('\n');
					}
				}
			}
		}
	}
}
