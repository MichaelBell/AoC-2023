#pragma once

#include <uart.h>
#define printf uart_printf

#include <isqrt.h>

void fail() {
    printf("Error\n");
    while (1);
}
