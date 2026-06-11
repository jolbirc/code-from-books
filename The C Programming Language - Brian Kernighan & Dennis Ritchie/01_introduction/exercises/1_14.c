#include <stdio.h>

/* histogram of letter frequencies */

int main(void)
{
    int i, nc, state;    	// loop ctr, characters; state (in/out)
    int nchar[4];    		// array for histogram
    char c;			// current character
    
    /* initialise elements in array to 0 */
    for(i = 0; i < 4; i++)
    {
        nchar[i] = 0;
    }

    /*  read characters */
    while((c = getchar()) != EOF)
    {
        if(c >= 'a' && c <= 'g')
        {
            ++nchar[0];
        }
        else if(c >= 'h' && c <= 'm')
        {
            ++nchar[1];
        }
        else if(c >= 'n' && c <= 't')
        {
            ++nchar[2];
        }
        else if(c >= 'u' && c <= 'z')
        {
            ++nchar[3];
        }
    }
        
    for(i = 0; i < 4; i++)    // cycle through each category
    {
        /* category labels */
        if(i == 0)
        {
            printf("A-G: ");
        }
        else if(i == 1)
        {
            printf("H-M: ");
        }
        else if(i == 2)
        {
            printf("N-T: ");
        }
        else
        {
            printf("U-Z: ");
        }


        for(int j = 0; j < nchar[i]; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
