#include <stdio.h>
#include<stdint.h>

typedef struct{
    int mssv;
    char ho[10];
    char dem[10];
    char ten[10];
    int tuoi;
    char sex[10];
    float toan;
    float van;
    float anh;
    float diemTB;
} sv_info_t;
sv_info_t sv_arr[100]; int numberSV =0;
sv_info_t nhapSV(void)
{
    sv_info_t sv;
    printf("Nhap mssv: ");
    scanf("%d", &sv.mssv);
    printf("Nhap ho va ten: ");
    fflush(stdin);
    scanf("%s %s %s", sv.ho, sv.dem, sv.ten);
    printf("Nhap tuoi: "); scanf("%d", &sv.tuoi);
    printf("Nhap gioi tinh: ");
    fflush(stdin);
    gets(sv.sex);
    printf("Nhap diem toan, van, anh: ");
    scanf("%f %f %f", &sv.toan, &sv.van, &sv.anh);
    sv.diemTB = (sv.toan + sv.van + sv.anh)/3;
    numberSV++;
    return sv;
}

void inSV(sv_info_t sv, int index)
{
    printf("SV[%d]: \n", index);
    printf("%-10d%-10s%-10s%-10s%-10d%-10s%-10.2f%-10.2f%-10.2f", sv.mssv, sv.ho, sv.dem, sv.ten,sv.tuoi, sv.sex, sv.toan, sv.van, sv.anh, sv.diemTB);

}
void inAllSV(sv_info_t *sv, int num)
{
    printf("%-10s%-10s%-10s%-10s%-10s%-10s%-10s%-10s%-10s%-10s\n", "Ma SV", "Ho", "Dem", "Ten", "Tuoi", "Gioi tinh", "Toan", "Van", "Anh", "TB");
    for(int i=0; i<num; i++)
    {
        printf("%-10d%-10s%-10s%-10s%-10d%-10s%-10.2f%-10.2f%-10.2f%-10.2f\n", sv[i].mssv, sv[i].ho, sv[i].dem, sv[i].ten,sv[i].tuoi, sv[i].sex, sv[i].toan, sv[i].van, sv[i].anh, sv[i].diemTB);
    }
}
void sapxepSV(sv_info_t *sv, int num, char *option)
{
    printf("----------------------\n");
    sv_info_t sv_clone[100];
    memcpy(sv_clone, sv, num* sizeof(sv_info_t));
    if(strstr(option, "ten"))
    {
        for(int i=0; i<num; i++)
        {
            for(int j=0; j<num; j++)
            {
                if(strcmp(sv_clone[i].ten, sv_clone[j].ten)>0)
                {
                    sv_info_t bientrunggian = sv_clone[i];
                    sv_clone[i] = sv_clone[j];
                    sv_clone[j] = bientrunggian;
                }
            }
        }
    }
    if(strstr(option, "diem"))
    {

    }
    inAllSV(sv_clone, num);
}
char menu(void)
{
    char function;
    printf("Menu\n");
    printf("1. Them sinh vien\n");
    printf("2. Xoa sinh vien\n");
    printf("3. In toan bo sinh vien\n");
    printf("4. Sap xep theo ten sinh vien\n");
    printf("5. Sap xep theo diem sinh vien\n");
    while(function < '1'|| function>'5')
    {
        printf(">");
        fflush(stdin);
        scanf("%c", &function);

    }
    return function;
}
int main()
{
//    sv_arr[numberSV] = nhapSV();
//    sv_arr[numberSV] = nhapSV();
//    sv_arr[numberSV] = nhapSV();
//    sapxepSV(sv_arr, numberSV, "ten");
////    inSV(sv[0], 0);
//    printf("----------------------\n");
//    inAllSV(sv_arr, numberSV);
    char function;
    while(1)
    {
        function = menu();
        switch(function)
            {
            case '1':
            break;
            case '2':
            break;
            case'3':
            break;
            case'4':
            break;
            case '5':
            break;
            }
    }
}
