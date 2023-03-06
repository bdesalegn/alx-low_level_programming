#include "main.h"
/**
  * _memset - Fill memory with a constant byte
  * @s: memory area to fill
  * @b: constant byte
  * @n: size in bytes of memory area
  *
  * Return: the memory area filled
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int count;

	for (count = 0; count < n; count++)
	{
		s[count] = b;
	}

	return (s);
}
