/* Libraries */
#include <ctype.h>
#include <limits.h>
#include <stdio.h>
#include <string.h>


/* Prototypes */
// Convert s to integer
int atoi(char s[]);
// Sort v[0]..v[n-1] into dec order
void shellsort(int v[], int n);
// Reverse string s in place
void reverse(char s[]);
// Expand shorthand notation
void expand(char s[]);
// Convert n to string s
void itoa(long n, char s[]);
// Convert integer to base
void itob(int n, char s[], int b);


/* Main */
int main() {
    // atoi()
    printf("atoi():\n");
    char a[] = "42";
    char b[] = "   42";
    char c[] = "-42";
    char d[] = "+42";
    char e[] = "   -42";

    printf("%d\n", atoi(a));
    printf("%d\n", atoi(b));
    printf("%d\n", atoi(c));
    printf("%d\n", atoi(d));
    printf("%d\n", atoi(e));

    printf("\n\n");


    // shellsort()
    printf("shellsort():\n");
    int v[] = {5, 2, 9, 1, 5, 6};

    shellsort(v, 6);

    for (int i = 0; i < 6; i++) {
        printf("%d ", v[i]);
    }

    printf("\n\n");


    // reverse()
    printf("reverse():\n");
    char f[] = "hello";
    char g[] = "a";
    char h[] = "ab";
    char i[] = "";

    reverse(f); printf("%s\n", f);
    reverse(g); printf("%s\n", g);
    reverse(h); printf("%s\n", h);
    reverse(i); printf("%s\n", i);


    // expand()
    printf("expand():\n");
    char j[] = "a-zA-Z";
    expand(j);


    // itoa()
    printf("\nitoa():\n");
    char k[20];
    itoa(INT_MIN, k);

    for (int i = 0; k[i] != '\0'; i++) {
        printf("%c", k[i]);
        printf("\n");
    }


    // itob
    printf("\nitob():\n");
    char l[20];
    itob(25, l, 2);
    printf("%s\n", l);

    return 0;
}


/* Definitions */
// Convert s to integer
int atoi(char s[]) {
    int i, n, sign;

    // Skip whitespace
    for (i = 0; isspace(s[i]); i++);

    // Check for sign, default to pos
    sign = (s[i] == '-') ? -1 : 1;

    // Skip sign
    if (s[i] == '+' || s[i] == '-') {
        i++;
    }

    for (n = 0; isdigit(s[i]); i++) {
        n = 10 * n + (s[i] - '0');
    }

    return sign * n;

}

// Sort v[0]..v[n-1] into dec order
void shellsort(int v[], int n) {
    int gap, i, j, temp;

    // Gap between elements
    for (gap = n/2; gap > 0; gap /= 2) {
        // Step along elements
        for (i = gap; i < n; i++) {
            // Compare each pair of elements and reverse if not in order
            for (j = i-gap; j >= 0 && v[j] > v[j+gap]; j+=gap) {
                temp = v[j];
                v[j] = v[j+gap];
                v[j+gap] = temp;
            }
        }
    }
}

// Reverse string s in place
void reverse(char s[]) {
    int c, i, j;

    for (i = 0, j = strlen(s)-1; i < j; i++, j--) {
        c = s[i];
        s[i] = s[j];
        s[j] = c;
    }
}

// Expand shorthand notation
void expand(char s[])
{
    int start, end, i, j;

    for (i = 0; s[i] != '\0'; i++) {
        if (s[i] == '-' && i > 0 && s[i-1] != '-' && s[i+1] != '\0') {
            start = s[i-1];
            end = s[i+1];
            i++;

            for (j = start; j <= end; j++) {
                printf("%c", j);
            }
        }

        printf("\n");
    }
}

// Convert n to string s
void itoa(long n, char s[]) {
    int i, sign;

    if ((sign = n) < 0) {   // Record sign
        n = -n;             // Make n positive
    }

    i = 0;

    do {
        s[i++] = n % 10 + '0';  // Get next digit
    } while ((n /= 10) > 0);    // Delete it

    if (sign < 0) {
        s[i++] = '-';
    }

    s[i] = '\0';
    reverse(s);
}

// Convert an integer to a base character representation
void itob(int n, char s[], int b) {
    int i = 0;

    while (n > 0) {
        if (n % b == 0) {
            s[i++] = '0';
        } else {
            s[i++] = '1';
        }
        n /= b;
    }

    s[i] = '\0';
    reverse(s);
}
