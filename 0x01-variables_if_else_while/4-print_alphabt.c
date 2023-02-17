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
	/*print lowercase letters */
	while ((ch = !'e') && (ch = !'q'))
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
