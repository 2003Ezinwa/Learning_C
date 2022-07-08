#include <stdio.h>

int main(void)
{
    int prices[3] = {5, 4, 3};
    
    printf("%u\n\n", *(prices + 2));
    printf("%u", prices);
    return (0);
}