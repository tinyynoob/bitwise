// "log.h" would be included when link with main
#include <stdint.h>

// follow LP64 data mode
#define sqrt(x)                     \
    _Generic((x), unsigned long     \
             : sqrt64, long         \
             : sqrt64, int          \
             : sqrt32, unsigned int \
             : sqrt32, default      \
             : sqrt64)(x)

// return rounding down answer
uint32_t sqrt32(uint32_t x)
{
    if (!x)
        return 0;
    uint32_t ans = 0;
    uint32_t shift = (log(x) & ~1u);
    uint32_t sub = (uint32_t) 1u << shift;
    if (x >= sub) {
        x -= sub;
        ans += 1;
    }
    while (shift) {
        shift -= 2;
        sub = ((ans << 2) + 1) << shift;
        if (x >= sub) {
            x -= sub;
            ans = (ans << 1) + 1;
        } else {
            ans = ans << 1;
        }
    }
    return ans;
}

// return rounding down answer
uint64_t sqrt64(uint64_t x)
{
    if (!x)
        return 0;
    uint64_t ans = 0;
    uint64_t shift = (log(x) & ~1u);
    uint64_t sub = (uint64_t) 1u << shift;
    if (x >= sub) {
        x -= sub;
        ans += 1;
    }
    while (shift) {
        shift -= 2;
        sub = ((ans << 2) + 1) << shift;
        if (x >= sub) {
            x -= sub;
            ans = (ans << 1) + 1;
        } else {
            ans = ans << 1;
        }
    }
    return ans;
}
