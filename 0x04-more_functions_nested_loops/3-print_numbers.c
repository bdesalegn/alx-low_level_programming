#include "main.h"

/**
 * print_numbers - prints 0 to 9.
 * Return : Always 0
 */
void print_numbers(void)
{
	int num = 0;

	for (num = 0; num < 10; num++)
	{
		_putchar('0' + num);
	}
	__putchar('\n');
}
