#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * _strdup - print copy of the string
 * @str: String pointer
 * Return: coppy of the string
 */
char* _strdup(char* str)
{
	if (str == NULL)
	{
		return (NULL);
	}
	int len = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	char* cop = malloc(len + 1);
	
	if (cop == NULL)
	{
		return (NULL);
	}
	for (int i = 0; i <= len; i++)
	{
		cop[i] = str[i];
	}
		return (cop);
		
		free(cop);
}
