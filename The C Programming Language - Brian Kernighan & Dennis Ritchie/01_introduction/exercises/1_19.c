#include <stdio.h>
#define MAXLINE 1000    // maximum input size


int get_line(char line[], int maxline);    
int reverse(char line[]);      

int main(void)
{
    char line[MAXLINE];       	// current input line
    int len;

    // Read lines from input
    while((len = get_line(line, MAXLINE)) > 0)
    {
        reverse(line);
        printf("%s\n", line);
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

// reverse input 
int reverse(char s[])
{
    int i, j;
    char temp;

    for (i = 0; s[i] != '\0'; i++)
        ;
    j = i - 1;
    
    // swap
    for (i = 0; i < j; i++, j--)
    {
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }
}
