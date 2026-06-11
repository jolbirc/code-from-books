#include <stdio.h>
#define MAXLINE 1000

int get_line_one(char line[], int maxline);
int get_line_two(char line[], int maxline);

int main(void)
{   
    return 0;
}

// original for loop
int get_line_one(char s[], int lim)
{
    int c, i;

    for (i = 0; i < lim-1 && (c=getchar()) != '\n' && c != EOF; ++i)
    {
        s[i] = c;
    }

    if (c == '\n')
    {
        s[i] = c;
        ++i;
    }

    s[i] = '\0';
    return i;
}

// new for loop
int get_line_two(char s[], int lim)
{
    int c, i;

    for (i = 0; i < lim-1; ++i)
    {
        c = getchar();
        if (c == '\n')
            break;
        if (c == EOF)
            break;
        s[i] = c;
    }

}
