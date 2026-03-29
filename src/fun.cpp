// Copyright 2022 UNN-IASR
#include "fun.h"

int64_t power(int64_t x, uint16_t n) {
    uint64_t res = 1;
    for (uint16_t i = 0; i < n; i++) {
        res *= x;
    }
    return res;
}
