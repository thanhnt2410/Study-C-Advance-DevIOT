
//-------------Cấp phát động---------------
//Bộ nhớ được cấp phát trong quá trình chạy chương trình
//Cho phép quản lý, phân bổ hay giải phóng bộ nhớ trong khi chạy chương trình
//Chỉ cấp phát vùng nhớ khi cần sử dụng tới
//Chương trình chạy chậm hơn so với cấp phát tĩnh
//Tiết kiệm được không gian bộ nhớ
//Hàm cấp phát bộ nhớ động void* malloc(size_t size);
//Hàm cấp phát bộ nhớ động void calloc(size_t num, size_t size);
//Hàm giải phóng bộ nhớ  free(ptr) với ptr là con trỏ

#include <stdio.h>
#include <stdint.h>

/* typedef struct
{
    char *ten;
    int tuoi;
    char *sdt;
} sinhvien_info; */
//trả về 1 địa chỉ mới
int * them(int *mang, int *n)
{
    int add;
    printf("Nhap phan tu can them: "); scanf("%d", &add);   //Nhap gia tri muon them vao
    int *arr_2 = (int*)calloc(*n+1, sizeof(int));
    memcpy(arr_2, mang, (*n)*sizeof(int));                   //Copy 10 phan tu tu mang cu sang mang moi
    arr_2[*n] = add;
    free(mang);
    (*n)++;
    return arr_2;
}
void in(int *mang, int n)
{
    for(int i=0; i<n; i++)
    {
        printf("%d \t", *(mang+i));

    }
    printf("\n");
}
//Giải thích hàm xoá phần tử:
//Truyền vào vị trí cần xoá, gán vị trí đấy là giá trị của vị trí kế tiếp.
//Sau đó copy sang 1 mảng khác nhưng chỉ copy n-1 phần tử
int * xoa(int *mang, int*n, int position)
{
//    int remote;
//    printf("Xoa phan tu thu: "); scanf("%d", &remote);   //Nhap gia tri muon them vao
    for(int i=position; i<*n;i++)
    {
        *(mang+i) = *(mang+i+1);
    }
    int *arr_2 = (int*)calloc(--*n, sizeof(int));
    //Day sang chuoi moi
    memcpy(arr_2, mang, (*n)*sizeof(int));                   //Copy 10 phan tu tu mang cu sang mang moi
    free(mang);
    return arr_2;
}
int main()
//{
//    //malloc nhanh hon, calloc an toàn hơn
//    //calloc trả về con trỏ tới vùng nhớ được cấp phát và vùng nhớ được khởi tạo bằng giá trị 0, NULL nếu cấp phát sai
//    //malloc trả về con trỏ tới vùng nhớ nếu cấp phát thành công, NULL nếu sai
//    //int *pt = malloc(10*sizeof(int));
//    /*int *pt = calloc(10, sizeof(int));
//    pt[0] =1000;
//    printf("%d", pt[0]);
//    free(pt);*/
//    sinhvien_info sv1;
//    sv1.ten = calloc(30, sizeof(char));
//    printf("Nhap ten: ");
//    gets(sv1.ten);
//    printf("Nhap tuoi: ");
//    scanf("%d", &sv1.tuoi);
//    printf("Ten: %s\nTuoi: %d\n",sv1.ten, sv1.tuoi );
//
//    return 0;
//}
{
    int i;
    int n=5, position;
    int *arr = (int*)calloc(n, sizeof(int)); //Khai bao mang
    for(i=0; i<5; i++)
    {
        printf("arr[%d]= ", i);scanf("%d", arr+i);
    }
    in(arr, n);
    //arr = them(arr, &n);
    //in(arr, n);
    printf("Nhap vi tri can xoa"); scanf("%d", &position);
    arr=xoa(arr, &n,position-1);
    in(arr, n);
    return 0;
}
