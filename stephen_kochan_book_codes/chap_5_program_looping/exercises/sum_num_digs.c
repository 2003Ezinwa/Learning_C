#include <stdio.h>

int main(void)
{
	int n = 0, inp, g;

	printf("Enter the number: ");
	scanf("%i", &inp);

	g = inp;

	while (inp != 0)
	{
		n += inp %10;
		inp /= 10;
	}
	printf("Sum of the digits of %i is %i", g, n);
	return (0);
}
