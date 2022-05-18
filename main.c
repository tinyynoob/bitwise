#include <limits.h>
#include <stdio.h>
#include "header.h"

int main()
{
    for (int i = 0; i < 40; i++)
        printf("log(%u) = %d\n", i, log(i));
    printf("log(%u) = %d\n", UINT32_MAX, log(UINT32_MAX));
    printf("log(%u) = %d\n", UINT32_MAX >> 1, log(UINT32_MAX >> 1));
    printf("log(%u) = %d\n", 1u << 16, log(1u << 16));
    printf("log(%u) = %d\n", (1u << 16) + 1, log((1u << 16) + 1));
    printf("log(%lu) = %d\n", UINT64_MAX, log(UINT64_MAX));
    return 0;
}