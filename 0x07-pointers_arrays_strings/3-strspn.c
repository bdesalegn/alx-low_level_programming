#include "main.h"

/**
  * _strspn - search a string for a set of bytes
  * @s: source string
  * @accept: accepted string
  *
  * Return: number of bytes in the init segment
  */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	char *p;

	for (; *s; s++, count++)
	{
		for (p = accept; *p; p++)
		{
			if (*s == *p)
			{
				break;
			}
		}
		if (!*p)
		{
			break;
		}
	}
	return (count);
}
