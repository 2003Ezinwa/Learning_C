#include <stdio.h>

int incrementAge()
{
    static int ages[3];
    
    ages[3]++;
    return (ages[3]);
}

int main(void)
{
    printf("%d\n", incrementAge());
    printf("%d\n", incrementAge());
    printf("%d\n", incrementAge());
    printf("%d\n", incrementAge());
    return (0);
}