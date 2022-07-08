#include <stdio.h>

int main(void)
{
    int i, j;
    
    i = 365, j = 7;
    printf("The next largest multiple for %d with respect to %d is %f\n", i, j, (float) (i + j - i % j));
    
    i = 12258, j = 23;
    printf("The next largest multiple for %d with respect %d is %f\n", i, j, (float) (i + j - i % j));
    
    i = 996, j = 4;
    printf("The next largest multiple for %d with respect to %d is %f", i, j, (float) (i + j - i % j));
    
    return (0);
}