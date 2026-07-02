#include <stdio.h>
#include "atof.h"
#include "../getline/my_getline.h"

#define MAXLINE 100

/* Rudimentary calculator */
int main(void)
{
    double sum, atof(char[]);
    char line[MAXLINE];
    int my_getline(char line[], int max);

    sum = 0;

    while (my_getline(line, MAXLINE) > 0)
        printf("\t%g\n", sum += atof(line));

    return 0;
}
