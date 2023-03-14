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
	if (str == NULL)
	{
		return (NULL);
	}
	char *dupt;

	dupt = malloc(strlen(str) + 1);
	if (dupt == NULL)
	{
		return (NULL);
	}
	/*strcpy(dup, str);*/
	dupt = str;
	return (dup);
}
