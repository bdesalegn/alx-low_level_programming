#include <stdio.h>
#include <stdlib.h>
int change_cents(int num_coins);
/**
 * main - print minimum numbers of coins
 * @argc: integer value
 * @argv: string value
 * Return: 1 if the argument is two eals error
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (argc < 0)
	{
		printf("0\n");
		return (0);
	}
	printf("%d\n", change_cents(atoi(argv[1])));
	return (0);
}
/**
 * change_cents - get change
 * @num_coins: amount of coins from main function
 * Return: change
 */

int change_cents(int num_coins)
{
	int i;
	int denominations[] = {25, 10, 5, 2, 1};
	int num_denominations = 5;

	num_coins = 0;

	for (i = 0; i < num_denominations; i++)
	{
		int denomination = denominations[i];

		num_coins -= denomination;

		/**
		 * int coins = cents / denomination;
		 * num_coins += coins;
		 * cents -= coins * denomination;
		 */
	}
	return (num_coins);
}
