#include <iostream>
#include <cassert>

char *xstrCpy(char* dest, char* src)
{
   char* temp = dest;

   assert(dest != NULL && src != NULL);
//   assert(src + strlen(src) < d || src > dest);

   while ((*dest++ = *src++) != '\0');

   printf("\n%s", temp);
   return temp;
}

char* appleStrCpy(register char* to, register const char* from)
{
   char* temp = to;

   assert(from != NULL && to != NULL);
   assert(sizeof(to) > sizeof(from)); //from + strlen(from) < d || 

   for (; *++to = *++from; );
   *to = '\0';
   printf("\n%s", temp);
   to = temp;
   return temp;
}

 int main()
{
    char dest[50] = "\0", src[50] = "How are you";
   //xstrCpy(dest, src);
   char* temp = appleStrCpy(dest, src);
   printf("\n%s", temp);
}