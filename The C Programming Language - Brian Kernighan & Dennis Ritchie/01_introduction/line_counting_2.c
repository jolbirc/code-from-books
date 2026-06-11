#include <stdio.h>

int main(void)
{   
    int c;
    int bl, tab, nl;

    bl = 0;
    tab = 0;
    nl = 0;

    while ((c = getchar()) != EOF)
    {
        if (c == ' ')
        {
            bl++;
        }

        if (c == '\t')
        {
            tab++;
        }

        if (c == '\n')
        {
            nl++;
        }
    }

    printf("The number of spaces is: %d\n", bl);
    printf("The number of tabs is: %d\n", tab);
    printf("The number of newlines is: %d\n", nl);

    return 0;  
}