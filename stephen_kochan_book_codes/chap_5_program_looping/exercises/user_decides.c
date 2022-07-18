#include <stdio.h>

int main(void)
{
	int n, number, triangularNumber, counter, rep;

	printf("How many times do you want this program to run?\n");
	scanf("%i", &rep);

	for (counter = 1; counter <= rep; ++counter)
	{
		printf("What triangular number do you want? ");
		scanf("%i", &number);

		triangularNumber = 0;
		for (n = 1; n <= number; ++n)
		{
			triangularNumber += n;
		}
		printf("Triangualar number %i is %i\n\n", number, triangularNumber);
	}
	return (0);
}
