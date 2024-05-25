// Copyright 2024 Ilya Guryanov
#include "fun.h"
int64_t power(int64_t x, uint16_t n) {
    int64_t sum = 1;
    for (int i = 0; i < n; i++) {
        sum = sum * x;
    }
    return sum;
}
