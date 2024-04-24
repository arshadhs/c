//
// Concatenate String
//
#include <stdio.h>

char* xstrcat(char *dst, char *src)
{
    char *xdest = dst;
    while(*dst != '\0') dst++;
    while(*src != '\0')
        *dst++ = *src++;
    *dst = '\0';

    return xdest;
}

int main()
{
    char src[100];
    char dst[100];

    printf ("\nEnter a source string: ");
    scanf(" %s", src);

    printf ("\nEnter a destination string: ");
    scanf(" %s", dst);

    printf("\nCopied as: %s\n", xstrcat(dst, src));

    return 0;
}
