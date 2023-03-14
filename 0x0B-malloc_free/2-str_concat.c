#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include "main.h"
/**
 * str_concat - coppy s1 to s2
 * @s1: string s1.
 * @s2: string s2.
 * Return: return null
 */
char *str_concat(char *s1, char *s2)
{
	if (!s1)
	s1 = "";
	if (!s2)
	s2 = "";
	unsigned int len1 = 0;
	int i;

	while (s1[len1] != '\0')
	{
		len1++;
	}
	unsigned int len2 = 0;

	while (s2[len2] != '\0')
	{
		len2++;
	}
	char *result;

	result = (char *) malloc(sizeof(char) * (len1 + len2 + 1));

	if (!result)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		result[i] = s1[i];
	}
	for (i = 0; i < len2; i++)
	{
		result[len1 + i] = s2[i];
	}
	result[len1 + len2] = '\0';
	return (result);
}
