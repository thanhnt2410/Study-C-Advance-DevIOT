#include <stdio.h>
#include"lib.h"
//char UART_RX[100] = "Du lieu nhan duoc;

data_uart_handle_t data_uart_ptr = NULL;
//Hàm nhận dữ liệu của UART
void UART_RX_Data(char *dataRx, int dataLen)
{
    data_uart_ptr(dataRx, dataLen); //nhận dữ liệu truyền vào
}
void UART_RX_Data_set_callback(data_uart_handle_t fptr)
{
    if(fptr)
    {
        data_uart_ptr = fptr; // gọi con trỏ hàm ra chỉ tới địa chỉ của hàm truyền vào
    }
}
