#include "main.h"

/**
  * _strpbrk - search a string for any of a set of bytes
  * @s: source string
  * @accept: accepted characters
  *
  * Return: the string since the first found accepted character
  */

char *_strpbrk(char *s, char *accept)
{
	int i = 0, b;

	while (s[i])
	{
		b = 0;

		while (accept[b])
		{
			if (s[a] == accept[b])
			{
				s += i;
				return (s);
			}

			b++;
		}

		i++;
	}

	return ('\0');
}
