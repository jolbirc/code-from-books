#include <stdio.h>

int main (void)
{
    int c;

    while ((c = getchar()) != EOF)
    {   
        if (c == ' ')
        {
            printf("\n");
        }
        
        putchar(c);
    }

    return 0;
}