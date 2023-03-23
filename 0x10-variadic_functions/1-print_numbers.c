#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"


/**
 * print_numbers - a function that prints numbers
 * @separator: string to be printed
 * @n: numbers of integers passed to the function
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);

	for (i = 1; i <= n; i++)
	{
		printf("%i", va_arg(args, int));
		if (i < n && separator)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args);
}
