#include <stdio.h>
#include <stdlib.h>

void capphatbonho(int **mang)
{
    *mang =calloc(10, sizeof(int));

}
int main()
{
    int *pt;
    int n=2;
    capphatbonho(&pt);
    pt[0] =1;
    printf("%d", pt[0]);
    return 0;
}