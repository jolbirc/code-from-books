// Write a function `escape(s, t)` that converts chatacters like newline and
// tab into visible escape sequences line \n and \t as it copies the string `t`
// to `s`. Use a switch. Add a function for the reverse also.

#include <stdio.h>

void escape(int c);
void reescape(int c);

int main() {

    int c;

    while ((c = getchar()) != EOF) {
        escape(c);
    }

    return 0;
}

void escape(int c) {
    switch(c) {
        case '\n':
            putchar('\\');
            putchar('n');
            break;
        case '\t':
            putchar('\\');
            putchar('t');
            break;
        default:
            putchar(c);
            break;
    }
}

void reescape(int c) {
    static int prev = 0;

    if (prev == '\\') {
        switch(c) {
            case 'n':
                putchar('\n');
                break;
            case 't':
                putchar('\t');
                break;
            default:
                putchar(prev);
                putchar(c);
                break;
        }
    } else if (c != '\\') {
        putchar(c);
        prev = 0;
    } else {
        prev = c;
    }
}
