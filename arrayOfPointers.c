//
// Array of Pointers
//
// YK
//

#include<stdio.h>

int main()
{
    int a[] = {0, 1, 2, 3, 4, 5};
    int *p[] = {a, a+1, a+2, a+3, a+4, a+5};

    for (int i = 0; i < 5; i++)
    {
        printf("%u \t %u \t %d\n", p+i, *(p + i) , *(*(p + i)));
    }

    return 0;
}
