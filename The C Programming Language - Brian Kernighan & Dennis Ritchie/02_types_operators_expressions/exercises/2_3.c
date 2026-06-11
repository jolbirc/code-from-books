#include <stdio.h>

int htoi(const char hex[]);

int main(void)
{
    char *tests[] = {"0x1A3", "7B", "0xFF", "2a4c", "0XDEAD", "abc"};
    int expected[] = {419, 123, 255, 10828, 57005, 2748};

    for (size_t i = 0; i < 6; i++)
    {
        int result = htoi(tests[i]);

        if (result == expected[i])
        {
            printf("%s - Expected: %d | Result: %d\n", tests[i], expected[i], result);
            printf("Pass\n\n");
        }
        else
        {
            printf("%s - Expected: %d | Result: %d\n", tests[i], expected[i], result);
            printf("Fail\n\n");
        }
    }

    return 0;
}

int htoi(const char hex[])
{
    int result = 0;
    int i = 0;

    // skip optional 0x or 0X
    if (hex[0] == '0' && (hex[1] == 'x' || hex[1] == 'X'))
    {
        i = 2;
    }

    // process each char until string (array) end
    while (hex[i] != '\0')
    {
        char c = hex[i];
        int value;

        // convert to lowercase
        if (c >= 'A' && c <= 'F')
        {
            c = c + 32;     // ascii difference
        }

        // convert char to numeric value
        if (c >= '0' && c <= '9')
        {
            value = c - '0';
        }
        else if (c >= 'a' && c <= 'f')
        {
            value = c - 'a' + 10;
        }
        else
        {
            return -1;      // invalid
        }

        result = result * 16 + value;
        i++;
    }

    return result;
}