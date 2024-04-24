//
// Program 6 - Pointers Type
//
// YK
//
#include<stdio.h>

int main()
{
    int i = 32765;
    float a = 3.14;
    char *ii, *aa;

    ii = &i;
    aa = &a;

    printf("\n ii = %u", ii);
    printf("\n aa = %u", aa);
    printf("\n *ii = %d", *ii);
    printf("\n *aa = %d", &aa);
    printf("\n");
    return 0;
}
