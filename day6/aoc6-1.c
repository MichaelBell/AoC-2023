#include "../aoc.h"

#include <stdbool.h>

#if 0
const char* data = "Time:      7  15   30\n\
Distance:  9  40  200\n";
#else
const char* data = "Time:        42     89     91     89\n\
Distance:   308   1170   1291   1467\n";
#endif

#define MAX_RACES 4
typedef struct {
    int time;
    int distance;
} race_t;
race_t races[MAX_RACES];
int num_races = 0;

int main()
{
    const char* ptr = data;

    const char* end;
    end = read_word(ptr);
    if (!check_word(ptr, end, "Time")) fail();
    ptr = end;
    if (*ptr++ != ':') fail();

    while (*ptr != '\n') {
        while (*ptr == ' ') ++ptr;
        ptr = read_num(ptr, &races[num_races++].time);
    }
    ptr++;
    end = read_word(ptr);
    if (!check_word(ptr, end, "Distance")) fail();
    ptr = end;
    if (*ptr++ != ':') fail();

    int race_idx = 0;
    while (*ptr != '\n') {
        while (*ptr == ' ') ++ptr;
        ptr = read_num(ptr, &races[race_idx++].distance);
    }
    if (race_idx != num_races) fail();

    uint32_t score = 1;
    for (race_idx = 0; race_idx < num_races; ++race_idx) {
        // Not using floating point math
        // Want to find first and last values where n * (t - n) > d
        // So find approx roots n = (t +/- sqrt(t^2 - 4*d)) / 2
        uint32_t t = races[race_idx].time;
        uint32_t d = races[race_idx].distance;
        uint32_t disc = isqrt(t*t - 4*d);

        uint32_t min_n = (t - disc) >> 1;
        if (min_n * (t - min_n) <= d) min_n += 1;
        if (min_n * (t - min_n) <= d) fail();

        uint32_t max_n = (t + disc) >> 1;
        if (max_n * (t - max_n) <= d) max_n -= 1;
        if (max_n * (t - max_n) <= d) fail();

        //printf("%u %u\n", min_n, max_n);
        score *= (max_n + 1 - min_n);
    }
    printf("%u\n", score);

    return 0;
}
