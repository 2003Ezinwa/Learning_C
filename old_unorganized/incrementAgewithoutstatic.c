#include <stdio.h>

int incrementAge()
{
    int age = 0;
    
    age ++;
    return (age);
}

int main(void)
{
    printf("%d\n", incrementAge());
    printf("%d\n", incrementAge());
    printf("%d\n", incrementAge());
    return (0);
}