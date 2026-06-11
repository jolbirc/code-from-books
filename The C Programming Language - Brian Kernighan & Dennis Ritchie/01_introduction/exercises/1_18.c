#include <stdio.h>
#define MAXLINE 1000    // maximum input size


int get_line(char line[], int maxline);    
int trim_line(char line[]);      

int main(void)
{
    char line[MAXLINE];       	// current input line
    int len;

    // Read lines from input
    while((len = get_line(line, MAXLINE)) > 0)
    {
        // trim trailing blanks and tabs 
        len = trim_line(line);
        
        // only print non-blank lines
        if (len > 0)
        {
            printf("%s", line);
        }
    }

    return 0;  
}

int get_line(char s[], int lim)
{
    int c, i;

    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
    {
        s[i] = c;    // Store each char in array
    }

    if (c == '\n')
    {
        s[i] = c;    
        ++i;         
    }

    s[i] = '\0';    // null-terminate
    return i;   
}

// removes trailing blanks and tabs from line
int trim_line(char s[])
{
    int i;

    for (i = 0; s[i] != '\0'; i++)
        ;

    while (i > 0 && (s[i-1] == ' ' || s[i-1] == '\t' || s[i-1] == '\n'))
        i--;

    s[i] = '\0';    // end trimmed str
    return i;
}
