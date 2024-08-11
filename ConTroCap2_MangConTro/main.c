//#include <stdio.h>
//
//int main()
//{
//    int x =1000;
//    int y = 50;
//    int *pt = &x;
//    int **ptt = &pt;
//
//    printf("&x = %d\n", &x);
//    printf("pt = %d\n", pt);
//    printf("&pt = %d\n", &pt);
//    printf("ptt = %d\n", ptt);
//    printf("*ptt = %d\n", *ptt);
//    printf("**ptt = %d\n", **ptt);
//*&x    =  -794823100
//pt      =    -794823100
//&pt     =   -794823112
//ptt     =   -794823112
//*ptt    =  -794823100
//**ptt   = 100
//*/
//    //**ptt = 500; gán lại giá trị cho x
//
//}

#include <stdio.h>
#include <stdlib.h>

void capphatbonho(int **mang)
{
    *mang =calloc(10, sizeof(int));

}
void capPhatDong(int *p, int n)
{
    int **pt =(int**)p; // con trỏ cấp 2 trỏ đến con trỏ cấp 1
    *pt = calloc(10, sizeof(int));
}
int main()
{
//    int *pt;
//    int n=2;
//    capphatbonho(&pt);
//    pt[0] =1;
//    printf("%d", pt[0]);
//    return 0;
    int *ptr = NULL;
    int n=2;
    capPhatDong(&ptr, n);
    ptr[0]=1;
    //printf("Dia chi cap phat: %p\n", ptr);
    printf("%d", ptr[0]);
}




