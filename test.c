#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "header.h"

#define TESTNUM 10000000

int main()
{
    srand(time(NULL));
    puts("start test:");
    for (int i = 0; i < TESTNUM; i++) {
        uint32_t x = rand() << 16 | rand();
        if (__builtin_clz(x) + 1 != fls(x))
            printf("different answer when x = %d\n", x);
    }
    for (int i = 0; i < TESTNUM; i++) {
        uint32_t x = rand();
        if (__builtin_clz(x) + 1 != fls(x))
            printf("different answer when x = %d\n", x);
    }
    // printf("%d %d\n", __builtin_clz(0), fls(0));
    puts("end test.");
    return 0;
}