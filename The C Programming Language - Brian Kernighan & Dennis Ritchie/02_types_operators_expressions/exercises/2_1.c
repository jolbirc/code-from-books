// WRITE A PROGRAM TO DETERMINE THE RANGES OF CHAR, SHORT, INT, AND LONG BNOTH SIGNED AND UNSIGNED, BY PRINTING APPROPRIATE VALUES FROM STANDARD HEADERS AND BY DIRECT COMPUTATION. HARDER IF YOU COMPUTE THEM; DETERMINE THE RANGE OF THE VARIOUS FLOATING POINT TYPES.

#include <stdio.h>
#include <limits.h>

int main()
{
    printf("\nRanges:\n");
    printf("The number of bits in a byte: %d\n", CHAR_BIT);
    printf("The minimum value for a signed char: %d\n", SCHAR_MIN);
    printf("The maximum value for a signed char: %d\n", SCHAR_MAX);
    printf("The maximum value for an unsigned char: %u\n", UCHAR_MAX);
    printf("Defines the minimum value for type char and its value will be equal to SCHAR_MIN if char represents negative values, otherwise zero: %d\n", CHAR_MIN);
    printf("Defines the value for type char and its value will be equal to SCHAR_MAX if char represents negative values, otherwise UCHAR_MAX: %d\n", CHAR_MAX);
    printf("Defines the maximum number of bytes in a multi-byte character: %d\n", MB_LEN_MAX);
    printf("Defines the minimum value for a short int: %d\n", SHRT_MIN);
    printf("Defines the maximum value for a unsigned short int: %u\n", USHRT_MAX);
    printf("Defines the minimum value for an int: %d\n", INT_MIN);
    printf("Defines the maximum value for an int: %d\n", INT_MAX);
    printf("Defines the maximum value for an unsigned int: %u\n", UINT_MAX);
    printf("Defines the minimum value for a long int: %ld\n", LONG_MIN);
    printf("Defines the maximum value for a long int: %ld\n", LONG_MAX);
    printf("Defines the maximum value for an unsigned long int: %lu\n", ULONG_MAX);
    return 0;
}