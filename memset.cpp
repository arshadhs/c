#include<iostream>
using namespace std;

void *myMemset(void *str, int c, size_t n)
{
    unsigned char* ptr = (unsigned char *) str;;
    while (n-- > 0)
        *ptr++ = c;

    return str;
}

int main()
{
    char arr[50];
    myMemset(arr, 'c', 5);

    cout<<arr;

    return 0;
}