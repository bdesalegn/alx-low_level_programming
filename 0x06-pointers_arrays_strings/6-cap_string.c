#include "main.h"

/**
 * cap_string - a function that capitalizes all words of a string
 * @str: input string
 * @cap_next:
 * Return: caps on first letter of a separator
 */

char *cap_string(char *str)
{
	char *p = str;
	int cap_next = 1;

	while (*p != '\0')
	{
		if (*p == ' ' || *p == '\t' || *p == '\n' ||
				*p == ',' || *p == ';' || *p == '.' || *p == '!' ||
				*p == '?' || *p == '"' || *p == '(' || *p == ')' ||
				*p == '{' || *p == '}')
		{
			cap_next = 1;
		}
		else if (cap_next)
		{
			if (*p >= 'a' && *p <= 'z')
			{
				*p = *p - 'a' + 'A';
			}
			cap_next = 0;
		}
		p++;
	}
	return (str);
}
