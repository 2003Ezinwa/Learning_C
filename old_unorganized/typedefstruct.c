#include <stdio.h>

int main(void)
{
    typedef struct {
        int age;
        char *name;
    } PERSON;
    
    PERSON ezinwa;
    
    ezinwa = {19, "Ihedioha Ezinwa"};
    printf("%s's bio:\n", ezinwa.name);
    printf("Name: %s\n", ezinwa.name);
    printf("Age: %d", ezinwa.age);
}
