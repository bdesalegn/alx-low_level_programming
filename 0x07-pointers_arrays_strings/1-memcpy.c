#include"main.h"

/**
  * _memcpy - copy memory area
  * @dest: destination memory area
  * @src: source memory area
  * @n: bytes from memory area to copy
  *
  * Return: memory area replaced
  */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	/* unsigned int *d = dest;*/
	/*const unsigned char *s = src;*/

	int i;

	for (i = 0; i < n; i++)
	{
		d[i] = s[i];
	}
	return (dest);
}
