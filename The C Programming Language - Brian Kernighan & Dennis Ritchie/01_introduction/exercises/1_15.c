#include <stdio.h>

float temp(float c);

int main (void)
{
    int i;    // Counter, steps

    for(i = 0; i <= 300; i = i + 20)
    {
        printf("%d %.2f\n", i, temp(i));
    }
}

/* FUNCTION DEFINITION */
float temp(float cels)
{   
    float fahr;

    fahr = (cels * (9.0 / 5.0)) + 32;

    return fahr;
}
