#include <stdio.h>

#define IN 1    // inside a word
#define OUT 0   // outside a word

/* histogram of word lengths */

int main(void)
{
    int c, nc, state;    // characters; loop counter; number of char in word; state (in/out); histogram bars
    int nchar[4];    // array for histogram
    char star;
    
    state = OUT;    // initialise state to OUT
    nc = 0;    // initalise current letter count to zero


    /* initialise elements in array to 0 */
    for(i = 0; i < 4; i++)
    {
        nchar[i] = 0;
    }

    /*  read characters */
    while((c = getchar()) != EOF)
    {
        if(c == ' ' || c == '.' || c == ',' || c == '\n' || c == '\t' || c == '!' || c == '?' || c == ';')
        {
            if(state == IN)
            {

                if(nc <= 3)
                {
                    ++nchar[0];
                }
                else if(nc <= 8)
                {
                    ++nchar[1];
                }
                else if(nc <= 12)
                {
                    ++nchar[2];
                }
                else
                {
                    ++nchar[3];
                }

                state = OUT;
                nc = 0;
            }
        }

        else
        {
            state = IN;
            nc++;
        }
    }

    

    for(i = 0; i < 4; i++)    // cycle through each category
    {
        /* category labels */
        if(i == 0)
        {
            printf("1-3: ");
        }
        else if(i == 1)
        {
            printf("4-8: ");
        }
        else if(i == 2)
        {
            printf("9-12: ");
        }
        else
        {
            printf("13+: ");
        }


        for(int j = 0; j < nchar[i]; j++)
        {
            printf("*");
        }

        printf("\n");
    }

}
