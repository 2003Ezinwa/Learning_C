#include <stdio.h>

/* Program to calculate the average of a set of grades and count the number of failing test grades */

int main(void)
{
	int gradecount, i, grade;
	int gradetotal = 0;
	int failurecount = 0;
	float average;

	printf("How many grades will you be entering?");
	scanf("%i", &gradecount);

	for (i = i; i <= gradecount; ++i)
	{
		printf("Enter grade #%i: ", i);
		scanf("%i", &grade);
		gradetotal += grade;
		
		if (grade < 65)
		{
			++failurecount;
		}
	}
	average = (float)gradetotal / gradecount;
	printf("\nGrade average = %.2f\n", average);
	printf("Number of failures = %i\n", failurecount);
	return (0);
}	
