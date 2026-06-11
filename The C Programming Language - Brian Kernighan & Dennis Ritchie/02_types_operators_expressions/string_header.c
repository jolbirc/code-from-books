#include <stdio.h>
#include <string.h>

/* example */
int main(void)
{
    // character arrays (r/w)
    char str1[20] = "Hello";
    char str2[] = "World";

    // string literal (pointer; read only)
    const char *strl1 = "apple";
    const char *strl2 = "banana";
    
    // concatenation
    strcat(str1, " ");
    strcat(str1, str2);
    printf("Concatenated string: %s\n", str1);

    // string compare
    if (strcmp(strl1, strl2) < 0)
    {
        printf("%s comes before %s lexicographically\n", strl1, strl2);
    }

    // find first occurence
    char *pos = strchr(strl1, 'p');
    if (pos)
    {
        printf("Found 'p' at position: %ld in %s\n", pos - strl1, strl1);
    }
    else
    {
        printf("'p' not found in %s\n", strl1);
    }

    return 0;
}


