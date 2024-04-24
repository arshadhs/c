#include<iostream>

int arr()
{
   int a[20];  // declare

   printf("Size = %zu", sizeof(a));

   printf("\n");
   for (int i = 0; i < 10; i++)
      printf("\t %zd", a[i]);
   printf("\n");
   for (int i = 0; i < 10; i++)
      a[i] = i;//printf("\t %d", a[i]);
   printf("\n");
   for (int i = 0; i < 10; i++)
      printf("\t %d", a[i]);
   printf("\n");
   printf("Size = %zu", sizeof(a));

   return 0;
}


 int main()
{
   arr();
   return 0;  
}