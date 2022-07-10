#include <stdio.h>

int main(void)
{
	int n;

	printf("Table to display numbers ranging from 1 to 10, and their squares\n\n");
	printf("Number(n)        Square(n**2)\n");
	printf("-----------------------------\n");
	for (n = 1; n <= 10; n++)
	{
		printf("%2i                   %i\n", n, n * n);
	}
	printf("\n");
	return(0);
}
