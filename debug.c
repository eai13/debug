#include "debug.h"

/**
 * @brief for debug print
 * @param str 
 */
void print_db(int8_t * str){
    int8_t buf[128];
    snprintf(buf, 127, "[ %d ]\t\033[1m[DEBUG]\033[0m %ls", HAL_GetTick(), str);
    HAL_UART_Transmit(&DBG_UART, buf, strlen(buf), 100);
}

/**
 * @brief for warning print
 * @param str 
 */
void print_wr(int8_t * str){
    int8_t buf[128];
    snprintf(buf, 127, "[ %d ]\t\033[33;1m[WARN ]\033[0m %ls", HAL_GetTick(), str);
    HAL_UART_Transmit(&DBG_UART, buf, strlen(buf), 100);
}

/**
 * @brief for error print
 * @param str 
 */
void print_er(int8_t * str){
    int8_t buf[128];
    snprintf(buf, 127, "[ %d ]\t\033[31;1m[ERROR]\033[0m %ls", HAL_GetTick(), str);
    HAL_UART_Transmit(&DBG_UART, buf, strlen(buf), 100);
}

/**
 * @brief for info print
 * @param str 
 */
void print_in(int8_t * str){
    int8_t buf[128];
    snprintf(buf, 127, "[ %d ]\t\033[32;1m[INFO ]\033[0m %ls", HAL_GetTick(), str);
    HAL_UART_Transmit(&DBG_UART, buf, strlen(buf), 100);
}