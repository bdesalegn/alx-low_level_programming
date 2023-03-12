#include <stdio.h>
/**
 * main - prints all argument it recieves
 * @argc: and integer value
 * @argv: aray of String
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

