#include <stdio.h>
#include<stdlib.h>
int mang0[] = {1, 2, 3, 4 ,5};
int mang1[] = {11, 22, 33, 44, 55};
int mang2[] = {21, 22, 23, 24, 25};

void inmang(int *ar, int num)
{
    for(int i=0; i<num; i++)
    {
        printf("%d ", ar[i]);
    }
    printf("\n");
}
int main() {
    int **ptt = (int**) calloc(3, sizeof(int*));
    ptt[0] = mang0;
    ptt[1] = mang1;
    ptt[2] = mang2;
   //Nhap mang
   for(int i=0; i<5; i++)
   {
       printf("Nhap phan tu thu %d: ", i);
       scanf("%d", &ptt[0][i]);
   }
   //in mang
   inmang(ptt[0], 5);
   free(ptt);
}
