#include <stdio.h>
#include <math.h>

int main(void)
{
    float x = 2.55, i, a, b;
    
    a = cbrt(x);
    b = sqrt(x);
    i = (3*a) - (5*b) + 6;
    printf("The answer is %f", i);
    return (0);
}