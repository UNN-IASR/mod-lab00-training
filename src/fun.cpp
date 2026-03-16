// Copyright 2022 UNN-IASR
#include "fun.h"

int64_t power(int64_t x, uint16_t n)
{
    int64t result = 1;
    for (uint16_t i = 1; i <= n; i++)
        {
        result *= x ;
        }
    return result;
}
