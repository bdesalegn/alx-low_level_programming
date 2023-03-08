#include "main.h"
/**
 * is_prime_number - checks if a number is prime
 * @n: Number Integer
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int is_prime_number(int n)
{
	int i, n, temp = 0;

	/*iterate up to n/2.*/
	for (i = 2; i <= n / 2; i++)
	{
		if (n % i == 0)
		{
			temp++;
			break;
		}
	}
	/*check for the value of temp and num.*/
	if (temp == 0 && n != 1)
	{
		return (n);
	}
	else
	{
		return (n);
	}
	return (0);
}
