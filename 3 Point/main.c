//&pt: địa chỉ của con trỏ trên RAM
//pt: địa chỉ của con trỏ trỏ trỏ đến trên RAM
//*pt: giá trị tại vùng địa chỉ con trỏ trỏ đến trên RAM
// int x = 1000;
    // int *pt;
    // int *ptt = &x;
    // pt = &x;
    // printf("x = %d\n", x);
    // printf("&x = %d\n", &x);
    // printf("&pt = %d\n", &pt);
    // printf("pt = %d\n", pt);
    // printf("*pt = %d\n", *pt);
    // return 0;
// #include <stdio.h>
// #include <stdlib.h>
// //viet ham nhap mang va in mang
// void nhapMang(int *arr, int *number)
// {
//     printf("Nhap so phan tu cua mang: ");
//     scanf("%d", number);
//     for (int i=0; i< *number; i++)
//     {
//         printf("ar[%d] = ",i );
//         scanf("%d", (arr+i));
//     }
// }

// void inMang(int *arr, int number)
// {
//     for(int i=0; i<number; i++)
//     {
//         printf("ar[%d] = %d\n", i, arr[i]);
//     }
// }


// int main()
// {
    
//     int mang[100], sophantu;
//     nhapMang(&mang, &sophantu); //nhapMang(mang, &sophantu); in ra ket qua tuong tu
//     inMang(&mang, sophantu);

// }

//viết 1 hàm so sanh 2 so
//hàm trả về là con trỏ
/*
#include <stdio.h>
#include <stdlib.h>

int *timMax(int *x, int *y)
{
    if(*x>*y)
        return x;   //trả về địa chỉ của x
    else if(*x < *y)
        return y;   //trả về địa chỉ của y
    else 
        return x;
}
int main()
{
    int a = 10, b = 15;
    int *pt = timMax(&a, &b);
    printf("Max = %d\n", *pt);
    return 0;
}
*/
//Con trỏ hàm
// Khi muốn tác động tới 1 vùng nhớ mà ko muốn thay đổi giá trị
#include <stdio.h>
/*
int main()
{
    int x = 100;
    const int *pt = &x;
    // *pt = 50;
    printf("x = %d", *pt);
}
*/
//Hằng con trỏ
//Có thể đọc ghi được bình thường, tuy nhiên không thể thay đổi được địa chỉ trỏ của nó
int main()
{
    int x=100;
    int y=500;
    int const *pt =&x;
    //pt =&y; error
    printf("Gia tri = %d", *pt);
}