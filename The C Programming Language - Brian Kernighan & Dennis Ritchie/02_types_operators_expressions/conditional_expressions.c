#include <stdio.h>

int main()
{
    int b, i, n, z;
    int a[10];

    // if (a > b)
    // {
    //     z = a;
    // }
    // else
    // {
    //     z = b;
    // }

    // z = (a > b) ? a : b;

    //

    for (i = 0; i < n; i++)
    {
        printf("%6d%c", a[i], (i%10==9 || i==n-1) ? '\n' : ' ');
    }

    return 0;
}
