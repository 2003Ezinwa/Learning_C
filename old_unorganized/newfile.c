#include <stdio.h>

int main(void)
{
    int i = 0;
    
    while (1)
    {
        printf("%u\n", i);
        i++;
        if (i == 15)
        {
            break;
        }
    }
    return (0);
}