#include <stdio.h>
#include <stdlib.h>

// Including exercise 2_4 - 2_8
void print_binary(unsigned x, int bits)
{
    for (int i = 8 - 1; i >= 0; i--)
    {
        printf("%u", (x >> i) & 1);
    }
}

unsigned getbits(unsigned x, int p, int n)
{
    return (x >> (p + 1 - n)) & ~(~0 << n);
}

unsigned setbits(unsigned x, int p, int n, unsigned y)
{
    unsigned mask = ~(~0 << n);
    return (x & ~(mask << (p + 1 - n))) | (y & mask) << (p + 1 - n);
}

unsigned invert(unsigned x, int p, int n)
{
    unsigned mask = ~(~0 << n);
    return x ^ (mask << (p + 1 - n));
}

unsigned rightrot(unsigned x, int n)
{
    return (x >> n) | (x << (sizeof(unsigned) * 8 - n));
}

int main()
{
    int bits = sizeof(unsigned) * 8;

    // Get bits from x at position p with n bits
    unsigned x = 0b10101010;
    int p = 5;
    int n = 3;

    printf("getbits(x=%u, p=%d, n=%d)\n", x, p, n);
    printf("   x      : "); print_binary(x, bits); printf("\n");
    unsigned result = getbits(x, p, n);
    printf("   result : "); print_binary(result, bits); printf(" (%u)\n\n", result);

    // Set bits in x at position p with n bits from y
    unsigned y = 0b110;
    printf("setbits(x=%u, p=%d, n=%d, y=%u)\n", x, p, n, y);
    printf("   x      : "); print_binary(x, bits); printf("\n");
    printf("   y      : "); print_binary(y, bits); printf("\n");
    unsigned set_result = setbits(x, p, n, y);
    printf("   result : "); print_binary(set_result, bits); printf(" (%u)\n\n", set_result);

    // Invert bits in x at position p with n bits
    printf("invert(x=%u, p=%d, n=%d)\n", x, p, n);
    printf("   x      : "); print_binary(x, bits); printf("\n");
    unsigned invert_result = invert(x, p, n);
    printf("   result : "); print_binary(invert_result, bits); printf(" (%u)\n\n", invert_result);

    // Right rotate x by n bits
    printf("rightrot(x=%u, n=%d)\n", x, n);
    printf("   x      : "); print_binary(x, bits); printf("\n");
    unsigned rightrot_result = rightrot(x, n);
    printf("   result : "); print_binary(rightrot_result, bits); printf(" (%u)\n\n", rightrot_result);

    return 0;
}
