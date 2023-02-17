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
	/*print lowercase letters ecept q or e*/
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if ((ch != 'e') && (ch != 'q'))
		{
		putchar(ch);
		}
	}
	putchar('\n');
	return (0);
}
