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
	int n;

	/*prints all the numbers of base 16 in lowercase*/
	for (n = 0 ; n < 10; n++)
	{
		putchar('0' + n);
	}
	for (ch = 'a' ; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
