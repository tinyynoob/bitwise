#include <limits.h>
#include <stdio.h>
#include "header.h"

int main()
{
    for (int i = 0; i < 40; i++)
        printf("sqrt(%u) = %d\n", i, sqrt(i));
    printf("sqrt(%u) = %d\n", UINT32_MAX, sqrt(UINT32_MAX));
    printf("sqrt(%u) = %d\n", UINT32_MAX >> 1, sqrt(UINT32_MAX >> 1));
    printf("sqrt(%u) = %d\n", 1u << 16, sqrt(1u << 16));
    printf("sqrt(%u) = %d\n", (1u << 16) + 1, sqrt((1u << 16) + 1));
    printf("sqrt(%lu) = %ld\n", UINT64_MAX, sqrt(UINT64_MAX));
    return 0;
}