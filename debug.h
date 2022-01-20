#ifndef DEBUGGERSRC_H
#define DEBUGGERSRC_H

#define ADD_COLOR_TIMESTAMP

#define DBG_PORT huart1

#include "usart.h"
#include "stdint.h"

void print_db(const char * fmt, ...);
void print_wr(const char * fmt, ...);
void print_er(const char * fmt, ...);
void print_in(const char * fmt, ...);

#endif