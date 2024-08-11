#include <stdio.h>
#include<conio.h>
#include<math.h>
#include"lib.h"

void xulydulieu1(char *data, int len)
{
    if(strstr(data, "BLINK"))
    {
        printf("Blink Led\n");
    }
    else if(strstr(data, "TOGGLE"))
    {
        printf("Toggle led\n");
    }
}
void xulydulieu2(char *dataRx, int dataLen)
{
    if(strstr(dataRx, "ON"))
    {
        printf("On Led\n");
    }
    else if(strstr(dataRx, "OFF"))
    {
        printf("Off led\n");
    }
    else{
        printf("Unknown");
    }
}
//typedef int(*phepToan_t)(int, int);
//
//int cong(int x, int y)
//{
//    return x+y;
//}
//int tru(int x, int y)
//{
//    return x-y;
//}
//int nhan(int x, int y)
//{
//    return x*y;
//}
//int chia(int x, int y)
//{
//    return x/y;
//}
int main()
{
    UART_RX_Data_set_callback(xulydulieu2);
    //giả sử uart nhận được dữ liệu
    UART_RX_Data("ON", 10);
/*
    phepToan_t pheptoan;
    pheptoan = cong;
    int res = pheptoan(1,2);
    */ //con trỏ hàm chỉ đến hàm cộng
//    phepToan_t pheptoan[3]= {cong, tru, nhan};
//    int kq = pheptoan[0] (1,2);
//    printf("%d\n", kq);
}
