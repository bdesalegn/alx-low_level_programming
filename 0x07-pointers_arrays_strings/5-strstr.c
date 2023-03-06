#include "main.h"
/**
  * _strstr - locate a substring
  * @haystack: the string to search
  * @needle: the string to find
  *
  * Return: char value
  */
char *_strstr(char *haystack, char *needle)
{
	if (*needle == '\0')
	{
		return (haystack);
		while (*haystack != '\0')
		{
			char *h = haystack;
			char *n = needle;

			while (*h == *n && *n != '\0')
			{
				h++;
				n++;
			}
			if (*n == '\0')
			{
				return (haystack);
			}
			haystack++;
		}
		return ('\0');
	}
}
