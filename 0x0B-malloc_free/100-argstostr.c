#include <stdlib.h>
#include "main.h"
/**
 * argstostr - concatenates all the arguments of the program.
 * @av: char variable
 * @ac: integer val
 * Return: return null else
*/
char *argstostr(int ac, char **av)
{
	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
    /*count the total length of all arguments*/
	int total_len = 0; 
	int offset = 0;
	int i, len = 0;
	char *arg, *result;

	for (i = 0; i < ac; i++)
	{
		arg = av[i];
		while (arg[len] != '\0')
		{
			len++;
		}
		total_len += len + 1;

	}

	result = malloc(sizeof(char) * total_len);
	if (result == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		arg = av[i];
		len = 0;
		while (arg[len] != '\0')
		{
			result[offset + len] = arg[len];
			len++;
		}
		result[offset + len] = '\n';
		offset += len + 1;
	}
	result[offset] = '\0';
	return (result);
}
