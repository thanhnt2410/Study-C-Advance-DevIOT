//-----------------------------------------------------------------

//------------------Kỹ thuật callback------------------------------
//Hàm callback: hàm được gọi từ hàm khác

#include <stdio.h>
#include <conio.h>
#include <math.h>

// Dinh nghia callback
typedef int (* opstion) (int *, int);

//ham nhap mang
void nhapMang (int * array, int lengthArray)
{
    int i;
    printf("Nhap mang %d phan tu:n",lengthArray);
    for (i = 0; i<lengthArray; i++)
        {
            scanf("%d",(array + i));
        }
}


//Ham in mang

void inMang (int * array, int lengthArray)
{
    int i;
    printf("Mang da nhapn");
    for (i = 0; i<lengthArray; i++)
        {
            printf("%2d",*(array + i));
        }
}

//ham tim min
int timMin(int *array, int lengthArray)
{
 int i;
 int Min = *array;
 for(i=1;i<lengthArray;i++)
 if(Min>*(array+i)) Min = *(array+i);
 return Min;
}

//Ham tim max
int timMax(int *array, int lengthArray)
{
 int i;
 int Max = *(array);
 for(i=1;i<lengthArray;i++)
 if(Max<*(array+i)) Max = *(array+i);
 return Max;
}

// Khai bao cho phep goi lai ham callback de xu ly mang 1 mang voi chieu dai la lengthArray, chuc nang trong opstion
int opstionArray (int * array, int lengthArray, opstion pOption)
{
    // Tr? xy ly cho mang
    return  pOption (array, lengthArray);
}

/// Main /////
int main ()
{
    int array [10];
    int choise;
    // Nhap mang
    nhapMang (array, 10);
    // In ra mang vua nhap mang
    inMang (array, 10);
    choise = 0;
    printf ("\nTim Min Max hoac cua mang da nhap: \n");
    while (choise!= 3)
    {
        printf ("\nChon: \n1: Tim Min \n2: Tim Max \n3: Exit \n");
        scanf ("%d", &choise);
        // Chon lua opstion cho m?ng da nhap
        switch (choise)
        {
        case 1:
            printf ("Min =%d\n", opstionArray (array, 10, timMin));
            break;
        case 2:
            printf ("Max =%d\n", opstionArray (array, 10, timMax));
            break;
        case 3:
            break;
        }
    }

    getch ();
}