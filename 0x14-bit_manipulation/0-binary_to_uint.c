#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @a: pointer to a string of 0 and 1 chars
 *
 * Return: the converted binary number,or 0
 *
 */
unsigned int binary_to_uint(const char *a)
{
	unsigned int result = 0;

	if (a == NULL)
	return (0);

	/* repeate each character of the string */
	for (; *a != '\0'; a++)
	{
		/* Check if the character is not 0 or 1 */
		if (*a != '0' && *a != '1')
			return (0);
	result <<= 1;
	result += (*a - '0');
	}
	return (result);
}
