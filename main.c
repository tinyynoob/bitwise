#include <stdio.h>
#include <limits.h>
#include "header.h"

int main()
{
    for (int i = 1; i < 40; i++)
        printf("fls(%u) = %u\n", i, fls(i));
    printf("fls(%u) = %u\n", UINT32_MAX, fls(UINT32_MAX));
    printf("fls(%u) = %u\n", UINT32_MAX >> 1, fls(UINT32_MAX >> 1));
    return 0;
}