#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

	char ch;

	/* print lowercase letters */
	for (ch = 'z' ; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
