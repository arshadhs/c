#include <stdio.h>

void func(int* x, int* y)
{
   int temp = *x;
   *x = *y;
   *y = temp;
   printf("\nx=%d y =%d", *x, *y);
}

int main()
{
   int i = 10;
   int j = 5;
   printf("\ni=%d j =%d", i, j);

   func(&i, &j);

   printf("\ni=%d j =%d", i, j);
}
