#include<stdio.h>
#include<stdint.h>

typedef struct{
    int index;
    char ssid[20];
    char pass[20];

} wifi_info_t;

int main()
{
    wifi_info_t info[3];
//    for(int i=0; i<3; i++)
//    {
//        printf("index[%d]: ",i);
//        //fflush(stdin);
//        scanf("%d", &info[i].index);
//        printf("ssid[%d]:",i);
//        fflush(stdin);
//        gets(info[i].ssid);
//        printf("pass[%d]:", i);
//        fflush(stdin);
//        gets(info[i].pass);
//    }
    char *dir = "E:\\Study\\C_advance\\XuLyFile\\wifi.bin";
    FILE *fptr = fopen(dir, "ab+");
//    fwrite(&info[0], sizeof(wifi_info_t), 3, fptr); //Ghi vao dang binary
    fread(&info[0], sizeof(wifi_info_t), 3, fptr); //Đọc ra dạng binary
    fclose(fptr);
    for(int i=0; i<3; i++)
    {
        printf("index[%d]: %d\n",i, info[i].index);
        printf("ssid[%d]: %s\n",i, info[i].ssid);
        printf("pass[%d]: %s\n",i, info[i].pass);

    }
    return 0;
}
