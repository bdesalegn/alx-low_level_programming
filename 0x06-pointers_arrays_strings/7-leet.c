#include "main.h"

/**
 * leet - Write a function that encodes a string into 1337
 *
 * @str:This is th  input string
 *
 * Return: String converted
 */


char *leet(char *str)
{
	char *result = str;
	char *leetChars[5] = {"4", "3", "0", "7", "1"};
	char *normalChars[5] = {"aA", "eE", "oO", "tT", "lL"};

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; str[j] != '\0'; j++)
		{
			if (str[j] == normalChars[i][0] || str[j] == normalChars[i][1])
			{
				result[j] = leetChars[i][0];
			}
		}
	}
	return (result);
}
