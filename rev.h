#include <stdint.h>

// follow LP64 data mode
#define rev(x)                     \
    _Generic((x), unsigned long    \
             : rev64, long         \
             : rev64, int          \
             : rev32, unsigned int \
             : rev32, default      \
             : rev64)(x)

// bit reversal
uint32_t rev32(uint32_t n)
{
    n = n << 16 | n >> 16;
    n = (n & 0x00FF00FFu) << 8 | (n & 0xFF00FF00u) >> 8;
    n = (n & 0x0F0F0F0Fu) << 4 | (n & 0xF0F0F0F0u) >> 4;
    n = (n & 0x33333333u) << 2 | (n & 0xCCCCCCCCu) >> 2;
    n = (n & 0x55555555u) << 1 | (n & 0xAAAAAAAAu) >> 1;
    return n;
}

// bit reversal
uint64_t rev64(uint64_t n)
{
    n = n << 32 | n >> 32;
    n = (n & 0x0000FFFF0000FFFFul) << 16 | (n & 0xFFFF0000FFFF0000ul) >> 16;
    n = (n & 0x00FF00FF00FF00FFul) << 8 | (n & 0xFF00FF00FF00FF00ul) >> 8;
    n = (n & 0x0F0F0F0F0F0F0F0Ful) << 4 | (n & 0xF0F0F0F0F0F0F0F0ul) >> 4;
    n = (n & 0x3333333333333333ul) << 2 | (n & 0xCCCCCCCCCCCCCCCCul) >> 2;
    n = (n & 0x5555555555555555ul) << 1 | (n & 0xAAAAAAAAAAAAAAAAul) >> 1;
    return n;
}