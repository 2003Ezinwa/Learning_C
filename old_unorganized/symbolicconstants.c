#include <stdio.h>

#define VALUE 1

int main(void)
{
    #ifdef VALUE
    {
        printf("Value is defined\n");
    }
    #else
    {
        printf("Value is not defined\n");
    }
    #endif
}