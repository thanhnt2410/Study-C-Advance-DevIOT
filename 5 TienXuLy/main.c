/* Chỉ thị tiền xử lý là những chỉ thị cung cấp cho trình biên dịch để xử lý những thông tin trước khi bắt
đầu quá trình biên dịch
Tất cả các chỉ thị tiền xử lý đều bắt đầu với # và các chỉ thị tiền xử lý khong phải là lệnh C/C++ vì vậy
không có dấu ; khi kết thúc
Có 3 loại
- chỉ thị bao hàm tệp (include)
- chỉ thị định nghĩa cho tên ( define macro)
- Chỉ thị biên dịch có điều kiện ( if, else, elif, endif)
*/
/*
#define cho phép tạo ra các Macro
công việc của nó là copy name_want_swap paste vào chỗ của new_name_use trong code
ví dụ: #define new_name_use name_wamt_swap
Chay nhanh hon so voi viec goi ham nhung co the ton nhieu bo nho hon
*/
#include<stdio.h>
#include "lib.h"

#define CONG(x,y) x+y
#define PI 3.14
#undef PI


int main()
{
#ifndef TYPE //Chi chay khi chua define
printf("Da vao day\n");

//#if 0
//    printName();
//    int z= CONG(1,2);
//    printf("%d\n", z);
    //chuyendoistring();
    float a, b, c;
#if (PT == PTB1) //ax+b=0
    printf("Nhap a va b\n");
    scanf("%f %f", &a, &b);

#elif (PT == PTB2)
    printf("Nhap a va b va c\n");
    scanf("%f %f %f", &a, &b, &c);
#endif
    //printf("End");
#if(PT==PTB1)
    if(a==0)
    {
        if(b==0)
        {
            printf("Nghiem cua phuong trinh la 0");
        }
        else
        {
            printf("Phuong trinh vo nghiem");
        }
    }
    else{
        printf("Nghiem cua phuong trinh la: %2f", -b/a);
    }
#endif
//#endif // 0
#endif // TYPE
}

