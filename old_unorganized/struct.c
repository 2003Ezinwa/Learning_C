#include <stdio.h>

int main(void)
{
    struct person
    {
        int age;
        char *name;
    };
    
    struct person flavio = {37, "Flavio"};
    printf("%s age %u\n", flavio.name, flavio.age);
    flavio.age = 38;
    printf("%s now aged %u", flavio.name, flavio.age);
    return (0);
}