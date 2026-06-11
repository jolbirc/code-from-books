#include <stdio.h>

int main(void)
{
    int x = 2;
    int y = 10;
    int value = 0;

    int year = 1983;

    value = y + x;
    printf("x + y = %d\n", value);

    value = y - x;
    printf("x - y = %d\n", value);

    value = y * x;
    printf("x * y = %d\n", value);

    value = y / x;
    printf("x / y = %d\n\n", value);

    // modulus
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    {
        printf("%d IS a leap year!\n", year);
    }
    else
    {
        printf("%d is not a leap year\n", year);
    }

    return 0;
}
