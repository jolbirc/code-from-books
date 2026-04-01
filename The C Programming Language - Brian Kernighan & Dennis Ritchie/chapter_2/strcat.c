#include <stdio.h>

void str_cat(char s[], char t[]);

int main(void)
{
    char s[50] = "Hello";
    char t[] = " World";

    printf("Before: %s\n", s);
    str_cat(s, t);
    printf("After strcat: %s\n", s);

    return 0;
}

void str_cat(char s[], char t[])
{
    int i, j;

    i = j = 0;

    while (s[i] != '\0')    // find end of s
    {
        i++;        
    }

    while ((s[i++] = t[j++]) != '\0')   // copy t
    {
        ;
    }
}