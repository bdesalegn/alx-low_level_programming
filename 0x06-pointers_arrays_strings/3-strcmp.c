#include "main.h"
/**
 * _strcmp - Write a function that compares two strings.
 *
 * @s1: This is the input string
 * @s2: This is the input string
 *
 * Return: If the strings are equals return "0", if not return other number
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
			return (s1[i] > s2[i]);
	}

	return (0);
}
