#include <stdio.h>

int main(void)
{
    int age = 37;
    int *address = &age;
    
    printf("%p\n", &age);
    printf("%u", *address);
    return (0);
}