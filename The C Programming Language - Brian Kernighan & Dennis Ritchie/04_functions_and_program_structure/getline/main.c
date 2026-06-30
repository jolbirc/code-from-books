#include <stdio.h>
#include "strindex.h"
#include "my_getline.h"
#define MAXLINE 1000        // Maximum input length

char pattern[] = "abc";    // Pattern to search for

/* Find all matching patterns */
int main(void)
{
    char line[MAXLINE];
    int found = 0;

    while (my_getline(line, MAXLINE) > 0)
    {
        if (strindex(line, pattern) >= 0)
        {
            printf("%s", line);
            found++;
        }
    }

    printf("%d\n", found);

    return found;
}
