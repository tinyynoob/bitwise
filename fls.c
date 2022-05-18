#include <stdint.h>
#include <stdbool.h>

int fls(uint32_t x)
{
    int ans = 0;
    bool m;
    m = x < (1u << 16);
    ans += (m && x) << 4;
    x >>= (!m) << 4;
    m = x < (1u << 8);
    ans += (m && x) << 3;
    x >>= (!m) << 3;
    m = x < (1u << 4);
    ans += (m && x) << 2;
    x >>= (!m) << 2;
    m = x < (1u << 2);
    ans += (m && x) << 1;
    x >>= (!m) << 1;
    m = x < (1u << 1);
    ans += (m && x);
    x >>= (!m);
    return ans + x;
}