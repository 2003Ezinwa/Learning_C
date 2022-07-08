#include <stdio.h>

typedef enum
{
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday,
    Sunday
}
WEEKDAYS;

int main(void)
{
    WEEKDAYS day = Monday;
    
    if (day == Monday)
    {
        printf("It's Monday!");
    }
    else
    {
        printf("It's not Monday!");
    }
}