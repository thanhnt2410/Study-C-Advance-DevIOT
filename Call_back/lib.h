#ifndef __LIB_H
#define __LIB_H
typedef void (*data_uart_handle_t)(char *data, int len);
void UART_RX_Data_set_callback(data_uart_handle_t fptr);
#endif // __LIB_H
