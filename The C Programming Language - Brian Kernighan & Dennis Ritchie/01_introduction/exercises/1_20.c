/* WRITE A PROGRAM THAT REPLACES TABS IN THE INPUT WITH THE PROPER NUMBER OF BLANKS TO SPACE TO THE NEXT TAB STOP. ASSUME A FIXED SET OF TAB STOPS, SAY EVERY 'N' COLUMNS. SHOULD N BE A VARIABLE OR A SYMBOLIC PARAMETER? */

#include <stdio.h>
#define MAXLINE 1000    // max input
#define TABSTOP 4       // no of space per tab

int get_line(char line[], int maxline);
void detab(char input[], char output[], int maxline);

int main(void)
{
    char line[MAXLINE];     // current input line
    char outline[MAXLINE];  // output line with tabs replaced
    int len;

    // read lines from input
    while ((len  = get_line(line, MAXLINE)) > 0)
    {
        detab(line, outline, MAXLINE);
        printf("%s", outline);
    }
    
    return 0;
}

int get_line(char s[], int lim)
{
    int c, i;

    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; i++)
    {
        s[i] = c;   // store each char in array
    }

    if (c == '\n')
    {
        s[i] = c;
        ++i;
    }

    s[i] = '\0';    // null terminate
    return i;    
}

void detab(char input[], char output[], int maxline)
{
    int i, j, pos;
    i = j = 0;      // i = input index, j = output index, pos = current column pos
    pos = 0;

    while (input[i] != '\0' && j < maxline - 1)
    {
        if (input[i] == '\t')
        {
            // calculate the spaces needed to reach next tab stop
            int spaces = TABSTOP - (pos % TABSTOP);

            for (int k = 0; k < spaces && j < maxline - 1; k++)
            {
                output[j++] = ' ';
                pos++;
            }

            i++;
        }
        else
        {
            // copy non-tab
            output[j++] = input[i++];
            pos++;
        }
    }
    
    output[j] = '\0';   // null terminate
}