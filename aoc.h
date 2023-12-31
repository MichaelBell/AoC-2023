#pragma once

#include <stdbool.h>
#include <stdint.h>
#include "aoc_plat.h"

#ifndef max
#define max(a,b)            (((a) > (b)) ? (a) : (b))
#endif

#ifndef min
#define min(a,b)            (((a) < (b)) ? (a) : (b))
#endif

const char* read_num(const char* ptr, int* num) {
    *num = 0;
    bool negate = *ptr == '-';
    if (negate) ++ptr;
    while (*ptr >= '0' && *ptr <= '9') {
        *num *= 10;
        *num += *ptr++ - '0';
    }
    if (negate) *num = -*num;

    return ptr;
}

const char* read_num_ignore_spaces(const char* ptr, int* num) {
    *num = 0;
    while (*ptr >= '0' && *ptr <= '9') {
        *num *= 10;
        *num += *ptr++ - '0';
        while (*ptr == ' ') ptr++;
    }

    return ptr;
}

const char* read_num_ignore_spaces_u64(const char* ptr, uint64_t* num) {
    *num = 0;
    while (*ptr >= '0' && *ptr <= '9') {
        *num *= 10;
        *num += *ptr++ - '0';
        while (*ptr == ' ') ptr++;
    }

    return ptr;
}

const char* read_num_u32(const char* ptr, uint32_t* num) {
    *num = 0;
    while (*ptr >= '0' && *ptr <= '9') {
        *num *= 10;
        *num += *ptr++ - '0';
    }

    return ptr;
}

const char* read_word(const char* ptr) {
    while ((*ptr >= 'A' && *ptr <= 'Z') || (*ptr >= 'a' && *ptr <= 'z'))
        ++ptr;

    return ptr;
}

const char* read_alphanum(const char* ptr) {
    while ((*ptr >= 'A' && *ptr <= 'Z') || (*ptr >= 'a' && *ptr <= 'z') || (*ptr >= '0' && *ptr <= '9'))
        ++ptr;

    return ptr;
}

bool check_word(const char* ptr, const char* end, const char* word) {
    while (*word && ptr < end) {
        if (*word++ != *ptr++) return false;
    }
    return ptr == end;
}
