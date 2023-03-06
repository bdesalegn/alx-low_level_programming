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
	char *ptr;

	while (*s != '\0')
	{
		ptr = accept;
		while (*ptr != '\0')
		{
			if (*ptr == *s)
			{
				return (s); /*/ return the matching character in s */
			}
			ptr++;
		}
		s++;
	}
	return (NULL); /*/ if no matching character is found */
}
