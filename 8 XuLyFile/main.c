#include <stdio.h>
#include <stdint.h>

void ghifile(char *dir, char *text)
{
    FILE *fptr;
    fptr = fopen(dir, "a+");
    fputs(text, fptr);
    fclose(fptr);
}
char * docfile(char *dir)
{
    FILE *fptr;
    char *pt;
    fptr = fopen(dir, "a+");
    pt = (char *)calloc(100, sizeof(char));
    fseek(fptr, 0, SEEK_SET);
    fgets(pt, 100, fptr);
    fclose(fptr);
    return pt;
}

int main()
{
    char *dir = "E:\\Study\\C_advance\\XuLyFile\\test.txt";
    char *text1= "Hello 1234";
    //ghifile(dir, text1);
    char *kq = docfile(dir);
    printf("%s", kq);
//    FILE *fptr;
//    fptr = fopen(,"w+");
//    //fprintf(fptr, "123");
//    fputs("Nguyen Tuan Thanh", fptr);
//    fseek(fptr, 0, SEEK_SET); //Con trỏ về đầu file
//    fscanf(fptr, "%s %s", text1, text2);
//    printf("%s %s", text1, text2);
//    fclose(fptr);
    return 0;
}
