#include "stdio.h""

void func_xor(int i, int j)
{
   i = i ^ j;
   j = i ^ j;
   i = i ^ j;

   printf("\ni = %d j = %d", i, j);
}

int main()
{
   int i = 10;
   int j = 5;
   
   printf("\ni=%d j =%d", i, j);
   func_xor (i, j);
   printf("\ni=%d j =%d", i, j);
}