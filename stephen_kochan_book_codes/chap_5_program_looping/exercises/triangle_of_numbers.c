#include <stdio.h>

/*
 * main - print triangle of numbers of multiples of 5
 * Return: void
 */

int main(void)
{
	int n, a, trinum;

	printf("Number        TriangleNumber\n");
	printf("----------------------------\n");
	for (n = 5; n <= 50; n += 5)
	{
		trinum = n * (n + 1) / 2;
		printf("%2i                %i\n", n, trinum);
	}
	return (0);
}
