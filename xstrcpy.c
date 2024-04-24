//
// Copy String
//
#include <stdio.h>

void xstrcpy(char *src, char *dst)
{
    while(*src != '\0')
        *dst++ = *src++;
    *dst = '\0';
}

int main()
{
    char src[100];
    char dst[100];

    printf ("\nEnter a string: ");
    scanf(" %s", src);

    xstrcpy(src, dst);

    printf("Copied as: %s\n", dst);

    return 0;
}
