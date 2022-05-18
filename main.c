#include <limits.h>
#include <stdio.h>
#include "header.h"

int main()
{
    for (int i = 0; i < 40; i++)
        printf("fls(%u) = %u\n", i, fls(i));
    printf("fls(%u) = %u\n", UINT32_MAX, fls(UINT32_MAX));
    printf("fls(%u) = %u\n", UINT32_MAX >> 1, fls(UINT32_MAX >> 1));
    printf("fls(%u) = %u\n", 1u << 16, fls(1u << 16));
    printf("fls(%u) = %u\n", (1u << 16) + 1, fls((1u << 16) + 1));
    return 0;
}