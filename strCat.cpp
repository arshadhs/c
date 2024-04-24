#include "stdio.h"

// using array
char* yStrCat(char* d, const char* s)
{
   size_t i = 0, j = 0;

   for (; d[i] != '\0'; i++);

   for (; s[j] != '\0'; j++)
      d[i + j] = s[j];

   d[i + j] = '\0';

   printf("\n yStrCat %s", d);

   return d;
}

// Pointer Version
char* zStrCat(char* dest, const char* src)
{
   char *temp = dest;

   while (*dest != '\0') dest++;

   while (*src != '\0') *dest++ = *src++;

   printf("\n yStrCat %s", temp);

   return temp;
}

void strCatMain()
{
   char src[50] = "C++";
   char dest[50] = "My name is";

   zStrCat(dest, src);

   printf("\n strCatMain %s", dest);
}


 int main()
{
   strCatMain();
   return 0;
}

