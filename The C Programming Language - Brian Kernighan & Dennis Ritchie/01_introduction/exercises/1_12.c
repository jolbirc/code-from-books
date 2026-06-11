#include <stdio.h>

int main (void)
{
    int c;

    while ((c = getchar()) != EOF)
    {  	
        putchar(c);

        if (c == ' ')
        {
            printf("\n");
        }
        
    }

    return 0;
}
