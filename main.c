#include <stdint.h>
#include <stdio.h>
#include "header.h"

int main()
{
    for (int i = 0; i < 40; i++)
        printf("fls(%u) = %d\n", i, fls(i));
    printf("fls(%u) = %d\n", UINT32_MAX, fls(UINT32_MAX));
    printf("fls(%u) = %d\n", UINT32_MAX >> 1, fls(UINT32_MAX >> 1));
    printf("fls(%u) = %d\n", 1u << 16, fls(1u << 16));
    printf("fls(%u) = %d\n", (1u << 16) + 1, fls((1u << 16) + 1));
    printf("fls(%lu) = %ld\n", UINT64_MAX, fls(UINT64_MAX));
    return 0;
}