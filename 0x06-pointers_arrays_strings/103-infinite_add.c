#include "main.h"
/**
 * infinite_add - adds two numbers.
 * @n1:char
 * @n2:char.
 * @r:char
 * @size_r:int
 * Return:char.
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = strlen(n1);
	int len2 = strlen(n2);

	if (len1 > size_r || len2 > size_r)
	{
		return (0);
	}

	int carry = 0;
	int i, j, k;

	for (i = len1 - 1, j = len2 - 1, k = size_r - 1; i >= 0 ||
			j >= 0; i--, j--, k--)
	{
		int digit1 = i >= 0 ? n1[i] - '0' : 0;
		int digit2 = j >= 0 ? n2[j] - '0' : 0;
		int sum = digit1 + digit2 + carry;

		if (sum >= 10)
		{
			carry = 1;
			sum -= 10;
		}
		else
		{
			carry = 0;
		}
		r[k] = sum + '0';
	}
	if (carry > 0)
	{
		if (size_r == len1 + len2 + 1)
		{
			r[0] = '1';
			return (r);
		}
		else
		{
			return (0);
		}
	}
	return (&r[k + 1]);
}
