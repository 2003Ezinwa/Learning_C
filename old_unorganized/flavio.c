#include <stdio.h>

int main(void)
{
    char name[7] = "Flavio";
    int i;
    
    for (i = 0; name[i] != '\0'; i++)
    {
        printf("%c\n", name[i]);
    }
    printf("%s", name);
    return (0);
}