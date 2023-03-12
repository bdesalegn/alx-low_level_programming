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

	if (argc < 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{

		if (argv[i][0] < '0' || argv[i][0] > '9')
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
