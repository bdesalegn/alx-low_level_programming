#include <stdio.h>
#include <stdlib.h>
/**
 * main - add positive numbers
 * @argc: integer value
 * @argv: string value
 * Return: 1 if the argument is two eals error
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	for (i = 1; i < argc; i++)
	{
		int num = atoi(argv[i]);

		if (num <= 0)
		{
			if (argv[i][0] == '0')
			{
				printf("0\n");
			}
			else
			{
				printf("Error: '%s' is not a positive number\n", argv[i]);
			}
			return (1);
		}
		sum += num;
	}
	printf("%d\n", sum);
	return (0);
}
