#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat - concatenates two strings.
 * @s1:1st string
 * @s2:2nd string
 * @n: psitive integer
 * Return: If the function fails - NULL.
 * Otherwise - a pointer to the concatenated space in memory.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	unsigned int len1 = 0;

	while (s1[len1] != '\0')
	{
		len1++;
	}
	char *result = malloc(sizeof(char) * (len1 + n + 1));

	if (result == NULL)
	{
		return (NULL);
	}
	unsigned int i = 0;

	while (s1[i] != '\0')
	{
		result[i] = s1[i];
		i++;
	}
	unsigned int j = 0;

	while (j < n && s2[j] != '\0')
	{
		result[i] = s2[j];
		i++;
		j++;
	}
	result[i] = '\0';
	return (result);
}
