#include <stdio.h>

int main(void)
{
	int n = 1, triangularNumber;

	triangularNumber = 0;

	while (n <= 200)
	{
		triangularNumber = triangularNumber + n;
		n++;
	}
	printf("The 200th triangular Number is %i\n", triangularNumber);
	return (0);
}
