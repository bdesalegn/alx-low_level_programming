#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * _strdup - print copy of the string
 * @str: String pointer
 * Return: coppy of the string
 */
char *_strdup(char *str)
{
	unsigned int i, len = 0;
	char *cop;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[len] != '\0')
	{
		len++;
	}
	cop = malloc(sizeof(char) * len);
	if (cop == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len; i++)
	{
		cop[i] = str[i];
	}
		return (cop);
		free(cop);
}
