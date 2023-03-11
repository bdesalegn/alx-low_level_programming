#include "main.h"
#include <stdio.h>
/**
 * main - print name
 * @argc: integer value.
 * @argv: string
 * return: Always 0.
*/
int main(int argc, char *argv[])
{
	int i;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		++i;
	}
		return 0;
}
