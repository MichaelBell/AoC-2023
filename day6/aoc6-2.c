#include "../aoc.h"

#include <stdbool.h>

#if 0
const char* data = "Time:      7  15   30\n\
Distance:  9  40  200\n";
#else
const char* data = "Time:        42     89     91     89\n\
Distance:   308   1170   1291   1467\n";
#endif

// Returns floor(sqrt(n))
uint32_t isqrt64(uint64_t n) {
    uint64_t lo = 1;
    uint64_t hi = n;
    uint64_t mid = (lo + hi) >> 1;
    if (mid > 0xFFFFFFFFu) mid = 0xFFFFFFFFu;

    while (lo <= hi) {
        uint64_t midsq = mid*mid;
        if (midsq == n) return mid;
        if (midsq < n) {
            lo = mid + 1;
        }
        else {
            hi = mid - 1;
        }
        mid = (lo + hi) >> 1;
    }

    if (lo > hi) {
        if (hi*hi > n) return hi - 1;
        else return hi;
    }
}

int main()
{
    const char* ptr = data;

    const char* end;
    end = read_word(ptr);
    if (!check_word(ptr, end, "Time")) fail();
    ptr = end;
    if (*ptr++ != ':') fail();

    uint32_t t;
    uint64_t d;

    while (*ptr == ' ') ++ptr;
    ptr = read_num_ignore_spaces(ptr, &t);
    if (*ptr++ != '\n') fail();

    end = read_word(ptr);
    if (!check_word(ptr, end, "Distance")) fail();
    ptr = end;
    if (*ptr++ != ':') fail();

    while (*ptr == ' ') ++ptr;
    ptr = read_num_ignore_spaces_u64(ptr, &d);

    // Not using floating point math
    // Want to find first and last values where n * (t - n) > d
    // So find approx roots n = (t +/- sqrt(t^2 - 4*d)) / 2
    printf("%u %lu\n", t, d);

    uint64_t disc64 = (uint64_t)t*(uint64_t)t - 4*d;
    uint32_t disc = isqrt64(disc64);
    printf("%u\n", disc);

    uint32_t min_n = (t - disc) >> 1;
    if ((uint64_t)min_n * (uint64_t)(t - min_n) <= d) min_n += 1;
    if ((uint64_t)min_n * (uint64_t)(t - min_n) <= d) fail();
    printf("%u %lu\n", min_n, (uint64_t)min_n * (uint64_t)(t - min_n));

    uint32_t max_n = (t + disc) >> 1;
    if ((uint64_t)max_n * (uint64_t)(t - max_n) <= d) max_n -= 1;
    if ((uint64_t)max_n * (uint64_t)(t - max_n) <= d) fail();
    printf("%u %lu\n", max_n, (uint64_t)max_n * (uint64_t)(t - max_n));

    printf("%u %u\n", min_n, max_n);
    uint32_t score = (max_n + 1 - min_n);
    printf("%u\n", score);

    return 0;
}