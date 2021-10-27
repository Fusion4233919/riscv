#include <stdio.h>
#include "define.h"

int main()
{
    BYTE a = 0xFF, b = 0, c = 0x55;
    printf("%d %d\n", a|c&b, a||c&&b);
    return 0;
}