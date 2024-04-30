#include<iostream>
#include <stdint.h>
using namespace std;

void *memCpyFast(void *dest, void const *src, size_t size) {
    int blocks = size / sizeof(uint32_t);
    int remainder = size % sizeof(uint32_t);

    unsigned char *d = static_cast<unsigned char *>(dest);
    unsigned char const *s = static_cast<unsigned char const *>(src);

    while (blocks--) {
        *((uint32_t *)d) = *((uint32_t *)s);
        d += sizeof(uint32_t);
        s += sizeof(uint32_t);
    }
    while(remainder--) {
        *d++ = *s++;
    }

    return dest;
}

int main() {
    char src[20] = "Hio how are you?";
    char dest[20];

    memCpyFast(dest, src, 10);
    printf("%s", dest);
}