#include <stdio.h>

/*
 * main - calculate the first 10 factorials
 * Return: void
 */

int main(void)
{
	int n, prod = 1;

	printf("Number          Factorial\n");
	printf("-----------------------------\n");

	for (n = 1; n <= 10; n++)
	{
		prod = prod * n;
		printf("%2i                 %i\n", n, prod);
	}
	return (0);
}

