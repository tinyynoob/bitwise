#include <limits.h>
#include <stdio.h>
#include "header.h"

int main()
{
    for (int i = 0; i < 40; i++)
        printf("rev(%u) = %d\n", i, rev(i));
    printf("rev(%u) = %d\n", UINT32_MAX, rev(UINT32_MAX));
    printf("rev(%u) = %d\n", UINT32_MAX >> 1, rev(UINT32_MAX >> 1));
    printf("rev(%u) = %d\n", 1u << 16, rev(1u << 16));
    printf("rev(%u) = %d\n", (1u << 16) + 1, rev((1u << 16) + 1));
    printf("rev(%lu) = %ld\n", UINT64_MAX, rev(UINT64_MAX));
    return 0;
}