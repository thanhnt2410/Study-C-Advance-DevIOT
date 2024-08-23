//---------------Là các hàm có thể truyền vào đa dạng các tham số mà không bị cố định số lượng tham số truyền vào---
//Giả sử bạn cần viết hàm cộng các số nguyên. Mỗi lần muốn thêm tham số truyền vào thì phải định nghĩa ra hàm mới
//Vì vậy variadic function chính là giải pháp cho các hàm truyền vào số tham số thay đổi

//-------------Variadic macro---------------------
/*
    Variadic macro giống như một macro có thể chứa được các tham số truyền vào 1 cách đa dạng.
    Thành phần quan trọng nhất của Variadic Macro là keyword __VA_ARGS__
    Dấu ... được dùng để chỉ ra rằng đó là tham số không bắt buộc. Tất cả các tham số sẽ được truyền tới keyword __VA_ARGS__
*/

#include<stdarg.h>
#include<stdio.h>
#include<stdlib.h>

#define LOG(...)  printf(__VA_ARGS__)
#define LOG(Format, ...)    printf("(%d): " Format, __LINE__, ##__VA_ARGS__)

int Cong(char c, ...)
{
    int Sum = 0;
    //dinh nghia 1 con tro toi agrument
    int number = c-48;
    va_list ptr;
    va_start(ptr, number);
    for(int i=0; i<number; i++)
    {
        Sum = Sum + va_arg(ptr, int);

    }
    va_end(ptr);
    return Sum;
}

//int main()
//{
////    int res = Cong('4',1,2,3,4);
////    printf("%d", res);
//    //printf("Hello world\n");
//
//    LOG("My name is %s \n", "Giang");  //-> printf("Hello World!");
//    LOG("%d + %d = %d", 1,2,3);
//    return 0;
//}

void simple_printf(const char* fmt, ...)
{
    va_list args;
    va_start(args, fmt);

    while (*fmt != '\0') {
        if (*fmt == 'd') {
            int i = va_arg(args, int);
            printf("%d\n", i);
        } else if (*fmt == 'c') {
            // A 'char' variable will be promoted to 'int'
            // A character literal in C is already 'int' by itself
            int c = va_arg(args, int);
            printf("%c\n", c);
        } else if (*fmt == 'f') {
            double d = va_arg(args, double);
            printf("%f\n", d);
        }
        ++fmt;
    }

    va_end(args);
}

int main(void)
{
    //LOG("Ten toi la %d", "");
    LOG("Ten toi la Thanh\n");
    LOG("Ten toi la %s", "Thanh");
//    simple_printf("dcff", 3, 'a', 1.999, 42.5);
//    char x ='A';
//    printf("%d", sizeof(1.999));
    return 0;
}































