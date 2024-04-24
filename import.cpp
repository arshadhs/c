// main.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

void func(int*, int*);
void func_xor(int i, int j);
void func_memCpy(int* i, int* j);
void strCatMain();
int arr();
char* xstrCpy(char* dest, char* src);
char* appleStrCpy(register char* to, register const char* from);
void binarySearch();

int linkedlist();

extern "C" int main()
{
   std::cout << "Hello World!\n";

   binarySearch();
  // linkedlist();

   //arr();
   //strCatMain();

   //char dest[50] = "\0", src[50] = "How are you";
   ////xstrCpy(dest, src);
   //char* temp = appleStrCpy(dest, src);
   //printf("\n%s", temp);

   // SWAP
#if 0
   int i = 10;
   int j = 5;
   printf("\ni=%d j =%d", i, j);

   //	 func(&i, &j);
   //	 func_xor (i, j);
   func_memCpy(&i, &j);
   printf("\ni=%d j =%d", i, j);

   //int *j = &i;
   //int** k;

   //k = &j;

   //printf("\n%d", *j);
   //printf("\n%d", j);
   //printf("\n%u", j);

   //printf("\n%d", **k);
   //printf("\n%u", *k);
   //printf("\n%u", k);
#endif
}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file





