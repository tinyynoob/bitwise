#ifndef __LOG_H
#define __LOG_H

#include <stdint.h>

#define log(x)                 \
    _Generic((x), uint64_t     \
             : log64, int64_t  \
             : log64, uint32_t \
             : log32, int32_t  \
             : log32, default  \
             : log64)(x)

int log32(uint32_t v)
{
    int ret = v > 0;
    int m = (v > (uint32_t) 0xFFFFU) << 4;
    v >>= m;
    ret |= m;
    m = (v > 0xFFU) << 3;
    v >>= m;
    ret |= m;
    m = (v > 0xFU) << 2;
    v >>= m;
    ret |= m;
    m = (v > 0x3U) << 1;
    v >>= m;
    ret |= m;
    ret += (v > 1);
    return ret - 1;
}

int log64(uint64_t v)
{
    int ret = v > 0;
    int m = (v > (uint64_t) 0xFFFFFFFFU) << 5;
    v >>= m;
    ret |= m;
    m = (v > (uint64_t) 0xFFFFU) << 4;
    v >>= m;
    ret |= m;
    m = (v > (uint64_t) 0xFFU) << 3;
    v >>= m;
    ret |= m;
    m = (v > 0xFU) << 2;
    v >>= m;
    ret |= m;
    m = (v > 0x3U) << 1;
    v >>= m;
    ret |= m;
    ret += (v > 1);
    return ret - 1;
}
#endif