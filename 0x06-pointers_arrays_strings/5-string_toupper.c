#include "main.h"

/**
 * string_toupper - a function that changes all lower of a string to upper
 * @str: input string
 * @p:
 * Return: capitialized string
 */

char *string_toupper(char *str)
{
	char *p = str;

	while (*p != '\0')
	{
		if (*p >= 'a' && *p <= 'z')
		{
			*p = *p - 'a' + 'A';
		}
		p++;
	}
	return (str);
}

