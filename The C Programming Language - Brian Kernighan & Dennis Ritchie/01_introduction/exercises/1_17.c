#include <stdio.h>
#define MAXLINE 1000    // maximum input size


int get_line(char line[], int maxline);    
void copy(char to[], char from[]);      

int main(void)
{
    int len;    		// length of the current input line
    int min = 80;    		// min line length to save
    char line[MAXLINE];       	// current input line
    char above[MAXLINE];    	// lines above 80

    // Read lines from input
    while((len = get_line(line, MAXLINE)) > 0)
    {
        // if current line length greater than min
        if(len > min)
        {
            printf("The following sentence is over 80 characters long:\n%s", line);    // print line
        }
		else
		{
		    printf("The following sentence is NOT over 80 characters long:\n%s", line);
		}
    }

    return 0;  
}

int get_line(char s[], int lim)
{
    int c, i;

    for (i = 0; i < lim-1 && (c = getchar()) != EOF && c != '\n'; ++i)
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

void copy(char to[], char from[])
{
    int i;
    i = 0;

    while((to[i] = from[i]) != '\0')
    {
        ++i;
    }
}
