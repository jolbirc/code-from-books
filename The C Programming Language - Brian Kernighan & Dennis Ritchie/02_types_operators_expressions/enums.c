#include <stdio.h>
   
enum months { JAN = 1, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC };

int main(void)
{
    const char *month_names[] = 
    {
        "", "JAN", "FEB", "MAR", "APR", "MAY", "JUN", "JUL", "AUG", "SEP", "OCT", "NOV", "DEC"
    };

    for (enum months m = JAN; m <= DEC; m++)
    {
        printf("%s = %d\n", month_names[m], m);
    }

    return 0;
}


