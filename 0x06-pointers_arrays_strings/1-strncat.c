#include "main.h"
/**
 * _strncat - a function that concatenates two strings
 * @dest:copy to
 * @src: copy from
 * @n: n
 * Return: Always 0 (Success)
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, counter;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}

	for (counter = 0; counter < n; counter++)
	{
		dest[i + counter] = src[counter];
		if (src[counter] == '\0')
			counter = n;
	}
	return (dest);
}
