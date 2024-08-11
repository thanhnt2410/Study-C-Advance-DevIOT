
//-----------Con trỏ hàm -------------------
//Là biến lưu trữ địa chỉ 1 hàm
//Thường được dùng để viết hàm callback
//Cho phép thực thi hàm mà không cần gọi tên hàm
//Khai báo không tường minh, định nghĩa 1 kiểu dữ liệu mới có tên là function pointer


#include<stdio.h>
#include<string.h>
typedef int (*func_t)(int, int);

void cong(int x, int y)
{
    printf("x + y = %d\n", x+y);
}

void tru(int x, int y)
{
    printf("x - y = %d\n", x-y);
}
void nhan(int x, int y)
{
    printf("x x y = %d\n", x*y);
}
void chia(int x, int y)
{
    printf("x : y = %d\n", x/y);
}
void chialaydu(int x, int y)
{
    printf("x mod y = %d\n", x%y);
}

int pheptoan(func_t func, int x, int y)
{
    return func(x, y);
}

int main()
{
    char cal;
    int x,y;
    printf("Nhap phep toan va tham so tu ban phim: "); scanf("%s %d %d", &cal, &x, &y);
    if(cal =='+')
    {
        printf(pheptoan(cong, x, y));
    }
    //pheptoan(cong, x, y);
    //pheptoan(tru, 1, 3);
}