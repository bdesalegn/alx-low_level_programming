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
	char *leetChars[] = {"4", "3", "0", "7", "1"};
	char *normalChars[] = {"aA", "eE", "oO", "tT", "lL"};
	/*char *smallChar[] = {"a", "e", "o", "t", "l"};*/

	for (int i = 0; str[i] != '\0'; ++i)
	{
		for (int j = 0; j < 5; j++)
		{
			if (str[i] == normalChars[j] || str[i] == normalChars[j])
			{
				result[i] = leetChars[j];
			}
		}
	}
	return (result);
}
