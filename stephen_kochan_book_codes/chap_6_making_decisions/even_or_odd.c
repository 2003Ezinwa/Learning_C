#include <stdio.h>

// Program to determine if a progrtam is even or odd

int main(void)
{
	int number, remainder;

	printf("Enter the number to be tested: ");
	scanf("%i", &number);
	remainder = number % 2;

	if (remainder == 0)
	{
		printf("The number is even.\n");
	}
	else
	{
		printf("The number is odd.\n");
	}
	return (0);
}
