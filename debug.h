#ifndef DEBUGGERSRC_H
#define DEBUGGERSRC_H

#define ETHERNET_DEBUG

#define DBG_UART huart1

#include "usart.h"
#include "stdint.h"

void print_db(int8_t * str);
void print_wr(int8_t * str);
void print_er(int8_t * str);
void print_in(int8_t * str);

#endif