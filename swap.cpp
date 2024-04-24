//
// Swap 2 variables in different ways
// Use Templates
 
 
//
#include <iostream>

//#include<stdio.h>

using namespace std;

template <class X>
void swapPointer(X *a, X *b)
{
    X k;
    k = *b;
    *b = *a;
    *a = k;
}

void swapBitwise(int *a, int *b)
{
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}



int main()
{
    int i = 3;
    int j = 999;
    printf("\n i = %3d \t j = %3d", i, j);
    swapPointer(&i, &j);
    printf("\n i = %3d \t j = %3d", i, j);

    char a = 'a';
    char b = 'b';
    printf("\n a = %3c \t b = %3c", a, b);
    swapPointer(&a, &b);
    printf("\n a = %3c \t b = %3c", a, b);

 //   string s = "Hello";
    string x = "Hello";
    string y = "How are you";
    printf("\n x = %s \t y = %s", x.c_str(), y.c_str());
    swapPointer(&x, &y);
    printf("\n x = %s \t y = %s", x.c_str(), y.c_str());


    swapBitwise(&i, &j);
    printf("\n i = %3d \t j = %3d", i, j);

    printf("\n");
    return 0;
}
