#include<stdio.h>
#include<stdlib.h>
//Con trỏ cấp 2 tiếp nhận địa chỉ của 1 con trỏ
int* capphatbonho(void)
{
    int *pt = calloc(10, sizeof(int));
    return pt;
}
int main()
{
    //&pt địa chỉ con trỏ trên RAM
    //pt: địa chỉ con trỏ trỏ đến trên ram
    //*pt giá trị tại vùng địa chỉ nó trỏ đến
    int *pt = NULL;
    pt = capphatbonho();
    pt[0] =1;
    printf("%d", pt[0]);
    return 0;
}
