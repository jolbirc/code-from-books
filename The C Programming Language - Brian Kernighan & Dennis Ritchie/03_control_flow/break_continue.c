#include <stdio.h>
#include <string.h>

// prototypes
int trim(char s[]);
void non_negative(int a[]);

int main() {
    char str[] = "Hello, World!        ";
    trim(str);

    int a[] = {1, -2, 3, -4, 5};
    non_negative(a);

    for (int i = 0; i < strlen(str); i++) {
        printf("%c", str[i]);
        printf("\n");
    }

    printf("\n");

    return 0;
}

int trim(char s[]) {
    int n;

    for (n = strlen(s)-1; n>= 0; n--){
        if (s[n != ' ' && s[n] != '\t' && s[n] != '\n']) {
            break;
        }
    }
    s[n+1] = '\0';

    return 0;
}

void non_negative(int a[]) {
    int i;
    int n = *(&a + 1) - a;


    for (i = 0; i < n; i++) {
        if (a[i] < 0) {
            continue;
        }
        if (a[i] >= 0) {
            printf("%d ", a[i]);
        }
    }
}
