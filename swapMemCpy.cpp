#include "stdio.h"
//#include <corecrt_memory.h>
//#include "memcpy

void func_memCpy(int* i, int* j)
{
   char temp[sizeof(int)];

   memcpy(temp, i, sizeof(int));
   memcpy(i, j, sizeof(int));
   memcpy(j, temp, sizeof(int));

   printf("\nfunc_memCpy i = %d, j = %d", *i, *j);
}

int main()
{
   int i = 10;
   int j = 5;
   
   printf("\ni=%d j =%d", i, j);
   func_memCpy(&i, &j);
   printf("\ni=%d j =%d", i, j);
}