#include <stdio.h>

/* strindex: return index of t in s, -1 if none */
int strindex(char source[], char pattern[])
{
    int start_pos, text_pos, pattern_pos, rightmost_index;

    for (start_pos = 0; source[start_pos] != '\0'; start_pos++)
    {
        text_pos = start_pos;
        pattern_pos = 0;
        rightmost_index = -1;

        while (pattern[pattern_pos] != '\0' && source[text_pos] == pattern[pattern_pos])
        {
            text_pos++;
            pattern_pos++;
        }

        if (pattern[pattern_pos] == '\0')
        {
            rightmost_index = start_pos;
            printf("Match found at %d, updating rightmost\n", rightmost_index);
        }
    }

    return rightmost_index;
}
