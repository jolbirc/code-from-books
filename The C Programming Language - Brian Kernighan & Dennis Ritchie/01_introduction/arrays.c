#include <stdio.h>

/* Count digits, whitespace, others */

int main (void)
{
    int c, i, nwhite, nother;    // Declares variables for characters, loop counter, whitespace, and other
    int ndigit[10];    // Array to store the count of each digit (0-9)

    nwhite = nother = 0;    // Initialise whitespace and other character counters

    // Initliase all elements of ndigit array to 0 
    for (i = 0; i < 10; i++)
    {
        ndigit[i] = 0;
    }

    // Read characters until End of File is encountered
    while ((c = getchar()) != EOF)
    {

        // If the character is a digit
        if (c >= '0' && c <= '9')
        {
            ++ndigit[c - '0'];    // Increment the count for that digit (subtracting 0 from c converts it into its corresponding int)
        }
        
        // If the character is a space, a newline, or a tab
        else if (c == ' ' || c == '\n' || c == '\t')
        {
            nwhite++;    // Incrememnt whitespace counter
        }

        // If the character is anything else
        else
        {
            nother++;    // Increment other
        }
    }

    // Print results
    printf("digits =");

    // Print the count of each digit
    for (i = 0; i < 10; i++)
    {
        printf(" %d", ndigit[i]);
    }

    // Print the count of whitespace and other characters
    printf(", white space = %d, other = %d\n", nwhite, nother);
    
    return 0;
}