#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 *
 * Return: the converted number,or 0
 *
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (b == NULL)
	return (0);

	/* Iterate through each character of the string */
	for (; *b != '\0'; b++)
	{
		/* Check if the character is not 0 or 1 */
		if (*b != '0' && *b != '1')
			return (0);
	result <<= 1;
	result += (*b - '0');
	}
	return (result);
}
