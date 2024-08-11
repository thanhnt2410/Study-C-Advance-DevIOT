#include <stdio.h>
#include<stdlib.h>
int mang0[] = {1, 2, 3, 4 ,5};
int mang1[] = {11, 22, 33, 44, 55};
int mang2[] = {21, 22, 23, 24, 25};

void nhapmang(int **arr, int hang, int cot)
{
    for(int i=0; i<hang; i++)
    {
        for(int j=0; j<cot; j++)
        {
            printf("arr[%d][%d]", i,j);
            scanf("%d", &arr[i][j]);
        }
    }
}
void inmang(int **arr, int hang, int cot)
{
    for(int i=0; i<hang; i++)
    {
        for(int j=0; j<cot; j++)
        {
            printf("%-5d", arr[i][j]);
        }
        printf("\n");
    }
}
int main() {
    int row, col;
    printf("Nhap so hang, cot:" );
    scanf("%d %d", &row, &col);
    int **ptt = (int **) calloc(row, sizeof(int*));
    for(int i=0; i<row; i++)
    {
        ptt[i] = (int*) calloc(col, sizeof(int));

    }
    nhapmang(ptt, row, col);
   inmang(ptt, row, col);
   for(int i=0; i<row; i++)
   {
        free(ptt[i]);
   }
   free(ptt);
}
