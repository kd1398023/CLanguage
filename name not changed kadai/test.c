#include <stdio.h>
unsigned short calcX(unsigned short value)
{
    return value + (value << 1) + (value << 3);
}
int main(void)
{
    unsigned short f = 4;
    printf("%d\n", calcX(f));
        return 0;
}