#include<stdio.h>
/**
 * main -Entry point
 *
 * Retur: Always 0(Success)
 */
int main(void)
{
	char a;
	int x;
	long int y;
	long long int z;
	float b;
	printf("Size of a char:%lu byte(s)\n",(unsigned long)sizeof(a));
	printf("Size of an int :%lu byte(s)\n",(unsigned long)sizeof(x));
	printf("Size of a long int %lu byte(s)\n",(unsigned long)sizeof(y));
	printf("Size of a long long int:%lu byte\n",(unsigned long)sizeof(z));
	printf("Size of a float:%1ubyte(s)\n",(unsigned long)sizeof(b));
	return(0);
}
