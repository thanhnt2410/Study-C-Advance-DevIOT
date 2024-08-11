#include <stdio.h>

int main()
{
    int x =100;
    int *pt = &x;
    int **ptt = &pt;

    printf("&x = %d\n", &x);
    printf("pt = %d\n", pt);
    printf("&pt = %d\n", &pt);
    printf("ptt = %d\n", ptt);
    printf("*ptt = %d\n", *ptt);
    printf("**ptt = %d\n", **ptt);
}
