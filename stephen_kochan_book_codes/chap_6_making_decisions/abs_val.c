#include <stdio.h>

//Program to calculate the absolute value of an integer

int main(void)
{
	int number;

	printf("Type in your number: ");
	scanf("%i", &number);

	if (number < 0)
	{
		number = -number;
	}
	printf("The absolute value is %i", number);
	return (0);
}
