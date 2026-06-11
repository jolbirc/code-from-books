#include <stdio.h>
/* Print Fahrenheit-Celsius table */

int main(void)
{
    float fahr, cels;
    int lower, upper, step;

    lower = 0;    // Lower limit of temp table.
    upper = 300;    // Upper limit.
    step = 20;    // Step size.

    fahr = lower;

    printf("\nFahrenheit to Celsius table\n\n");
    while (fahr <= upper)
    {
        cels = (5.0/9.0) * (fahr-32.0);
        printf("%3.0f\t%6.1f\n", fahr, cels);    // The 3 and 6 specify he width of the columns in digits.
        fahr = fahr + step;
    }

    cels = lower;

    printf("\n\nCelsius to Fahrenheit table\n\n");
    while (cels <= upper)
    {
        fahr = ((cels*9) / 5) + 32;
        printf("%3.0f\t%6.1f\n", cels, fahr);
        cels = cels + step;
    }

    // Exercise 1-5: Modify the temperature program to print the table in reverse order:

    fahr = upper;

    printf("\n\nIn reverse order:\n\n");

    while (fahr >= 0)
    {
        cels = (5.0/9.0) * (fahr-32.0);
        printf(" %3.0f \t %6.1f \n", fahr, cels);
        fahr = fahr - step;
    }
}
