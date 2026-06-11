#include <stdio.h>
#define MAXLINE 1000    // Defines constant for maximum input size


int get_line(char line[], int maxline);    // Declaration of the 'get_line' function
void copy(char to[], char from[]);        // Declaration of the 'copy' function


/* PRINT LONGEST` INPUT LINE */
int main(void)
{
    int len;    // Variable to store the length of the current input line
    int max;    // Variable to keep track of the longest line length seen so far
    char line[MAXLINE];       // Array to store the current input line
    char longest[MAXLINE];    // Array to store the longest line

    max = 0;    // Initialise the longest length to 0

    // Read lines from input using a loop
    while((len = get_line(line, MAXLINE)) > 0)    // Get length of each line
    {
        // Check if the current line length is greater than the maximum length so far
        if(len > max)
        {
            max = len;              // Update the max length
            copy(longest, line);    // Copy the current line to the longest line
        }
    }

    // If there's at least one line, print the longest one
    if (max > 0)    // This ensures there's something to print
    {
         printf("\nThe longest sentence was: %sIt's length was: %d characters.\n", longest, max);    // Print the longest line and its details
    }

    return 0;    // End of main

}

/* GETLINE */
/* This function reads a line of input and returns its length */
int get_line(char s[], int lim)
{
    int c, i;

    // Read characters one by one, stop when the limit is reached, EOF is encountered, or a newline ('\n') is found
    for (i = 0; i < lim-1 && (c = getchar()) != EOF && c != '\n'; ++i)
    {
        s[i] = c;    // Store each character in the array
    }

    // If a newline ('\n') was encountered, store it in the array
    if (c == '\n')
    {
        s[i] = c;    // Save the newline character in the array
        ++i;         // Increment index
    }

    s[i] = '\0';    // Null-terminate the string (necessary for proper string handling in C)
    return i;       // Return the length of the line (including newline, if present)
}

/* COPY */
/* This function copies a string from one array to another */
void copy(char to[], char from[])
{
    int i;

    i = 0;

    // Copy characters from "from" array to "to" array until the null terminator is encountered
    while((to[i] = from[i]) != '\0')
    {
        ++i;    // Increment index to move to the next character
    }
}
