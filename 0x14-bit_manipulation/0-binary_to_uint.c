#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @a: pointer to a string of 0 and 1 chars
 *
 * Return: the converted binary number,or 0
 *
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0;

	if (b == NULL)
	return (0);

	/* repeate each character of the string */
	for (; *b != '\0'; b++)
	{
		/* Check if the character is not 0 or 1 */
		if (*b != '0' && *b != '1')
			return (0);
	res <<= 1;
	res += (*b - '0');
	}
	return (res);
}
