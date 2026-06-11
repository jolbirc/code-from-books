#include <stdio.h>

int main(void)
{
    unsigned int hex_num = 0x1F;
    unsigned int octal_num = 0123;

    printf("Hex number: %x\n", hex_num);
    printf("In decimal: %d\n\n", hex_num);
    printf("Octal number: %o\n", octal_num);
    printf("In decimal: %d\n\n", octal_num);

    return 0;

}
