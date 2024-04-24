//
// Program 4 - Basic Pointers
//
// YK
//
#include<stdio.h>

int main()
{
    int i = 3;
    int *j = &i;
    int **k = &j;

    printf("\n &i = %u", &i);
    printf("\n j = %u", j);
    printf("\n *k = %u", *k);
    printf("\n &j = %u", &j);
    printf("\n k = %u", k);
    printf("\n &k = %u", &k);

    printf("\n i = %u", i);
    printf("\n j = %u", j);
    printf("\n k = %u", k);
    printf("\n *(&i) = %u", *(&i));
    printf("\n *j = %u", *j);
    printf("\n **k = %u", **k);
    printf("\n");
    return 0;
}
