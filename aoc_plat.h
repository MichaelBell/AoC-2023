#pragma once

#include <uart.h>
#define printf uart_printf

void fail() {
    printf("Error\n");
    while (1);
}
