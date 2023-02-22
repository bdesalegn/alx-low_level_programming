#include "main.h"

/**
  * print_last_digit - Computes the absolute value of an integer.
  * @n: The digits.
  * Return: Always lastDigit.
  */
int print_last_digit(int n)
{
	int lastDigit;

	lastDigit = n % 10;

	if (lastDigit < 0)
	{
		lastDigit = lastDigit * -1;
	}

	_putchar(lastDigit + '0');

	return (lastDigit);
}
