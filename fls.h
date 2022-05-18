#include <stdint.h>
#include <stdbool.h>

int fls(uint32_t x)
{
    int lg = 0;
    int m;
    m = (x >= (1u << 16)) << 4;
    lg += m;
    x >>= m;
    m = (x >= (1u << 8)) << 3;
    lg += m;
    x >>= m;
    m = (x >= (1u << 4)) << 2;
    lg += m;
    x >>= m;
    m = (x >= (1u << 2)) << 1;
    lg += m;
    x >>= m;
    lg += (x >= (1u << 1));
    return 32 - lg;
}