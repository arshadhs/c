#include<iostream>
using namespace std;

void *myMemcpy(void *dest, void *src, size_t len)
{
    unsigned char *s = (unsigned char*)src;
    unsigned char *d = (unsigned char*)dest;

    while((len-- > 0))
    {
        *d++ = *s++;
    }

    return dest;
}

int main()
{
    char s1[20] = "Hello how are you";
    char d[20] = "I am fine.";

    memcpy(d, s1, 10);
    cout << d;
    return 0;
}